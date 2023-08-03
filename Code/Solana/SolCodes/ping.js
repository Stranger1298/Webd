const web3= require("@solana/web3.js");
const fs=require("fs");
const PROG_ADD=ChT1B39WKLS8qUrkLvFDXMhEJ4F1XZzwUNHUt4AU9aVa;
const PROG_DATA_ADD=Ah9K7dQ8EHaZqcAsgBW8w37yN2eAy3koFmUn4x3CJtod;
async function main() {
    const payer=initializeKeypair();
    const connection=new web3.Connection(web3.clusterApiUrl("devnet"));
    await pingProgram(connection,payer);
}
function initializeKeypair() {
    const secret=JSON.parse(fs.readFileSync("secretkey.json")||"[]")
const secretkey=new Uint8Array(secret);
const KeyPairFromSecretKey=Keypair.fromSecretKey(secretkey);
return KeyPairFromSecretKey;
}
async function pingProgram(connection,payer) {
     const transaction=new web3.Transaction()
}