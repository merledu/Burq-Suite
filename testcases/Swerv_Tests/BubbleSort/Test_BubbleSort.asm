<main>:
   10150:	fc010113          	addi	sp,sp,-64
   10154:	02812e23          	sw	s0,60(sp)
   10158:	04010413          	addi	s0,sp,64
   1015c:	fc042423          	sw	zero,-56(s0)
   10160:	fc042623          	sw	zero,-52(s0)
   10164:	fc042823          	sw	zero,-48(s0)
   10168:	fc042a23          	sw	zero,-44(s0)
   1016c:	fc042c23          	sw	zero,-40(s0)
   10170:	fc042e23          	sw	zero,-36(s0)
   10174:	03800793          	li	a5,56
   10178:	fcf42423          	sw	a5,-56(s0)
   1017c:	07800793          	li	a5,120
   10180:	fcf42623          	sw	a5,-52(s0)
   10184:	05700793          	li	a5,87
   10188:	fcf42823          	sw	a5,-48(s0)
   1018c:	12c00793          	li	a5,300
   10190:	fcf42a23          	sw	a5,-44(s0)
   10194:	0ca00793          	li	a5,202
   10198:	fcf42c23          	sw	a5,-40(s0)
   1019c:	00500793          	li	a5,5
   101a0:	fef42223          	sw	a5,-28(s0)
   101a4:	fe042623          	sw	zero,-20(s0)
   101a8:	0cc0006f          	j	10274 <main+0x124>
   101ac:	fe042423          	sw	zero,-24(s0)
   101b0:	0a00006f          	j	10250 <main+0x100>
   101b4:	fe842783          	lw	a5,-24(s0)
   101b8:	00279793          	slli	a5,a5,0x2
   101bc:	ff040713          	addi	a4,s0,-16
   101c0:	00f707b3          	add	a5,a4,a5
   101c4:	fd87a703          	lw	a4,-40(a5) # ffffffd8 <__global_pointer$+0xfffee0f0>
   101c8:	fe842783          	lw	a5,-24(s0)
   101cc:	00178793          	addi	a5,a5,1
   101d0:	00279793          	slli	a5,a5,0x2
   101d4:	ff040693          	addi	a3,s0,-16
   101d8:	00f687b3          	add	a5,a3,a5
   101dc:	fd87a783          	lw	a5,-40(a5)
   101e0:	06e7d263          	bge	a5,a4,10244 <main+0xf4>
   101e4:	fe842783          	lw	a5,-24(s0)
   101e8:	00279793          	slli	a5,a5,0x2
   101ec:	ff040713          	addi	a4,s0,-16
   101f0:	00f707b3          	add	a5,a4,a5
   101f4:	fd87a783          	lw	a5,-40(a5)
   101f8:	fef42023          	sw	a5,-32(s0)
   101fc:	fe842783          	lw	a5,-24(s0)
   10200:	00178793          	addi	a5,a5,1
   10204:	00279793          	slli	a5,a5,0x2
   10208:	ff040713          	addi	a4,s0,-16
   1020c:	00f707b3          	add	a5,a4,a5
   10210:	fd87a703          	lw	a4,-40(a5)
   10214:	fe842783          	lw	a5,-24(s0)
   10218:	00279793          	slli	a5,a5,0x2
   1021c:	ff040693          	addi	a3,s0,-16
   10220:	00f687b3          	add	a5,a3,a5
   10224:	fce7ac23          	sw	a4,-40(a5)
   10228:	fe842783          	lw	a5,-24(s0)
   1022c:	00178793          	addi	a5,a5,1
   10230:	00279793          	slli	a5,a5,0x2
   10234:	ff040713          	addi	a4,s0,-16
   10238:	00f707b3          	add	a5,a4,a5
   1023c:	fe042703          	lw	a4,-32(s0)
   10240:	fce7ac23          	sw	a4,-40(a5)
   10244:	fe842783          	lw	a5,-24(s0)
   10248:	00178793          	addi	a5,a5,1
   1024c:	fef42423          	sw	a5,-24(s0)
   10250:	fe442703          	lw	a4,-28(s0)
   10254:	fec42783          	lw	a5,-20(s0)
   10258:	40f707b3          	sub	a5,a4,a5
   1025c:	fff78793          	addi	a5,a5,-1
   10260:	fe842703          	lw	a4,-24(s0)
   10264:	f4f748e3          	blt	a4,a5,101b4 <main+0x64>
   10268:	fec42783          	lw	a5,-20(s0)
   1026c:	00178793          	addi	a5,a5,1
   10270:	fef42623          	sw	a5,-20(s0)
   10274:	fe442783          	lw	a5,-28(s0)
   10278:	fff78793          	addi	a5,a5,-1
   1027c:	fec42703          	lw	a4,-20(s0)
   10280:	f2f746e3          	blt	a4,a5,101ac <main+0x5c>
   10284:	fe042623          	sw	zero,-20(s0)
   10288:	0100006f          	j	10298 <main+0x148>
   1028c:	fec42783          	lw	a5,-20(s0)
   10290:	00178793          	addi	a5,a5,1
   10294:	fef42623          	sw	a5,-20(s0)
   10298:	fec42703          	lw	a4,-20(s0)
   1029c:	fe442783          	lw	a5,-28(s0)
   102a0:	fef746e3          	blt	a4,a5,1028c <main+0x13c>
   102a4:	00000013          	nop
   102a8:	00000013          	nop
   102ac:	03c12403          	lw	s0,60(sp)
   102b0:	04010113          	addi	sp,sp,64
   102b4:	00008067          	ret