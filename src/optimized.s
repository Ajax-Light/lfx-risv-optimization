# Sample program optimized for 4-byte access

memset:

	mv    t1, a0
	beqz  a2, 2f

	## Store word (32b)
	sw    a1, 0(t1)
	## >>2 equivalent to /4
	srl   a2, a2, 2
	## move pointer by 4 bytes now
	add   t1, t1, 4
	bnez  a2, 1b

	ret
