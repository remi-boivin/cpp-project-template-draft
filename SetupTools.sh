git clone git@github.com:remi-boivin/hooks.git
rm -rf .git/hooks
mv -f hooks .git/
rm -rf hooks
npm i -g --force gitmoji-cli
npm i -g commitlint-config-gitmoji commitlint
echo "module.exports = {extends: ['gitmoji']};" > commitlint.config.js