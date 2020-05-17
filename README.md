# atcoder-answers

## 概要

atcoder での解答をまとめたもの \
開発環境や問題を解く上で役立つ情報を記録してます。

## 開発環境

- C++, VSCode の設定
  - [Visual studio code で競プロ環境構築[mac OS]](https://qiita.com/EngTks/items/ffa2a7b4d264e7a052c6)
- atcoder-cli, online-judge-tools による自動化
  - [AtCoder のディレクトリ作成・サンプルケースのテスト・提出を自動化する。atcoder-cli と online-judge-tools](https://qiita.com/takeaship/items/d0718066922612648eaa)

## 問題を解く流れ

```shell
# ディレクトリ作成、問題情報取得
$ acc new abc150(コンテスト名)

# 問題のリンク一覧を表示する。
$ cd abc150
$ acc tasks

# テスト実行
$ cd abc150/a
$ g++ main.cpp && oj t

# コード提出
$ cd abc150/a
$ acc s

# githubにあげる
$ git add .
$ git status
$ git commit -m "メッセージ"
$ git push
```
