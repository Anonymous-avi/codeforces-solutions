import requests
import os
import subprocess

HANDLE = "vector-clown"
WORKSPACE = r"C:\Users\91990\Desktop\Codeforces-Solutions"
SAVE_DIR = os.path.join(WORKSPACE, "Codeforces")

os.makedirs(SAVE_DIR, exist_ok=True)

url = f"https://codeforces.com/api/user.status?handle={HANDLE}&from=1&count=20"
data = requests.get(url).json()

if data["status"] != "OK":
    print("API error")
    exit()

submissions = data["result"]

for sub in submissions:
    if sub["verdict"] == "OK":
        contest = sub["contestId"]
        index = sub["problem"]["index"]
        name = sub["problem"]["name"]
        lang = sub["programmingLanguage"]

        if "C++" not in lang:
            continue

        submission_id = sub["id"]
        filename = f"{contest}{index}.cpp"
        filepath = os.path.join(SAVE_DIR, filename)

        if os.path.exists(filepath):
            continue

        code_url = f"https://codeforces.com/contest/{contest}/submission/{submission_id}"
        html = requests.get(code_url).text

        start = html.find("<pre")
        start = html.find(">", start) + 1
        end = html.find("</pre>", start)
        code = html[start:end]

        code = code.replace("&lt;", "<").replace("&gt;", ">").replace("&amp;", "&")

        with open(filepath, "w", encoding="utf-8") as f:
            f.write(code)

        print(f"Saved {filename}")

os.chdir(WORKSPACE)
subprocess.run(["git", "add", "."])
subprocess.run(["git", "commit", "-m", "Add Codeforces solutions"])
subprocess.run(["git", "push"])
