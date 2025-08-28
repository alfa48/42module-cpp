# 1️⃣ Clonar o repositório do GitHub
git clone https://github.com/usuario/repositorio.git
cd repositorio

# 2️⃣ Conferir a branch local do GitHub
git branch  # exemplo: main

# 3️⃣ Adicionar o remote do intra da 42
git remote add intra git@vogsphere.42luanda.com:vogsphere/nome-do-repo.git
git remote -v  # verificar remotes

# 4️⃣ Fazer backup da branch do intra (opcional)
git fetch intra master:backup-master

# 5️⃣ Forçar a substituição da branch do intra usando refs/heads
git push intra +refs/heads/main:refs/heads/master

# 6️⃣ Enviar todas as tags do GitHub para o intra
git push intra --tags

# 7️⃣ Verificar histórico e branches
git log --oneline
git branch -a
