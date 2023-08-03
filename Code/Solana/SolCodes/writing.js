const {clusterApiUrl, Connection, PublicKey, LAMPORTS_PER_SOL,Keypair, Transaction, SystemProgram, sendAndConfirmTransaction} = require("@solana/web3.js");

const fs=require("fs") //file system to link pvt key to this file
async function main() {
const connection = new Connection(clusterApiUrl("devnet"));
const secret=JSON.parse(fs.readFileSync("secretkey.json")||"[]")
const secretkey=new Uint8Array(secret);
const ownerKeypair=Keypair.fromSecretKey(secretkey);
console.log(ownerKeypair.publicKey.toBase58());
//publickey is defined in base 58 form

const publicKey=ownerKeypair.publicKey;

const transaction=new Transaction();
const reciptentAddress="dv2eQHeP4RFrJZ6UeiZWoc3XTtmtZCUKxxCApCDcRNV";
const reciptent=new PublicKey(reciptentAddress);

const sendSolInstruction=SystemProgram.transfer({
    fromPubkey: publicKey,
    toPubkey: reciptent,
    lamports:LAMPORTS_PER_SOL*0.1
});

transaction.add(sendSolInstruction);
const signature=await sendAndConfirmTransaction(connection,transaction,[ownerKeypair]);
console.log(signature);
}

main();