<main>:
   10150:	fd010113          	addi	sp,sp,-48
   10154:	02812623          	sw	s0,44(sp)
   10158:	03010413          	addi	s0,sp,48
   1015c:	00200793          	li	a5,2
   10160:	fef42023          	sw	a5,-32(s0)
   10164:	00300793          	li	a5,3
   10168:	fef42223          	sw	a5,-28(s0)
   1016c:	00500793          	li	a5,5
   10170:	fcf42c23          	sw	a5,-40(s0)
   10174:	00600793          	li	a5,6
   10178:	fcf42e23          	sw	a5,-36(s0)
   1017c:	fe042423          	sw	zero,-24(s0)
   10180:	fe042623          	sw	zero,-20(s0)
   10184:	0400006f          	j	101c4 <main+0x74>
   10188:	fec42783          	lw	a5,-20(s0)
   1018c:	00279793          	slli	a5,a5,0x2
   10190:	ff040713          	addi	a4,s0,-16
   10194:	00f707b3          	add	a5,a4,a5
   10198:	ff07a703          	lw	a4,-16(a5) # fffffff0 <__global_pointer$+0xfffee1e0>
   1019c:	fec42783          	lw	a5,-20(s0)
   101a0:	00279793          	slli	a5,a5,0x2
   101a4:	ff040693          	addi	a3,s0,-16
   101a8:	00f687b3          	add	a5,a3,a5
   101ac:	fe87a783          	lw	a5,-24(a5)
   101b0:	00f707b3          	add	a5,a4,a5
   101b4:	fef42423          	sw	a5,-24(s0)
   101b8:	fec42783          	lw	a5,-20(s0)
   101bc:	00178793          	addi	a5,a5,1
   101c0:	fef42623          	sw	a5,-20(s0)
   101c4:	fec42703          	lw	a4,-20(s0)
   101c8:	00100793          	li	a5,1
   101cc:	fae7dee3          	bge	a5,a4,10188 <main+0x38>
   101d0:	00000013          	nop
   101d4:	00000013          	nop
   101d8:	02c12403          	lw	s0,44(sp)
   101dc:	03010113          	addi	sp,sp,48
   101e0:	00008067          	ret