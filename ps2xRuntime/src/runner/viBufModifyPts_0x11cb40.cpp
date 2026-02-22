#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufModifyPts
// Address: 0x11cb40 - 0x11ccac
void viBufModifyPts_0x11cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cb40u;

    // 0x11cb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cb44: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x11cb44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cb4c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x11cb4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb50: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x11cb50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cb54: 0x8d62005c  lw          $v0, 0x5C($t3)
    ctx->pc = 0x11cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 92)));
    // 0x11cb58: 0x8d650058  lw          $a1, 0x58($t3)
    ctx->pc = 0x11cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 88)));
    // 0x11cb5c: 0x8d690054  lw          $t1, 0x54($t3)
    ctx->pc = 0x11cb5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x11cb60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cb64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x11cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11cb68: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CB68u;
    {
        const bool branch_taken_0x11cb68 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb68) {
            ctx->pc = 0x11CB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB68u;
            // 0x11cb6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CB70u;
            goto label_11cb70;
        }
    }
    ctx->pc = 0x11CB70u;
label_11cb70:
    // 0x11cb70: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x11cb70u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11cb74: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x11cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x11cb78: 0x352c0  sll         $t2, $v1, 11
    ctx->pc = 0x11cb78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11cb7c: 0x2010  mfhi        $a0
    ctx->pc = 0x11cb7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11cb80: 0x18a00046  blez        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x11CB80u;
    {
        const bool branch_taken_0x11cb80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11CB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB80u;
            // 0x11cb84: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb80) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CB88u;
    // 0x11cb88: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11cb8c: 0x8d630050  lw          $v1, 0x50($t3)
    ctx->pc = 0x11cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x11cb90: 0x1821018  mult        $v0, $t4, $v0
    ctx->pc = 0x11cb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11cb94: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x11cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cb98: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x11cb98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11cb9c: 0x11000040  beqz        $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x11CB9Cu;
    {
        const bool branch_taken_0x11cb9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CB9Cu;
            // 0x11cba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb9c) {
            ctx->pc = 0x11CCA0u;
            goto label_11cca0;
        }
    }
    ctx->pc = 0x11CBA4u;
    // 0x11cba4: 0x8da70014  lw          $a3, 0x14($t5)
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x11cba8: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x11CBA8u;
    {
        const bool branch_taken_0x11cba8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBA8u;
            // 0x11cbac: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cba8) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x11cbb0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbb4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11cbb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cbb8: 0x24190018  addiu       $t9, $zero, 0x18
    ctx->pc = 0x11cbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11cbbc: 0x0  nop
    ctx->pc = 0x11cbbcu;
    // NOP
label_11cbc0:
    // 0x11cbc0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11cbc4: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CBC4u;
    {
        const bool branch_taken_0x11cbc4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cbc4) {
            ctx->pc = 0x11CBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBC4u;
            // 0x11cbc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CBCCu;
            goto label_11cbcc;
        }
    }
    ctx->pc = 0x11CBCCu;
label_11cbcc:
    // 0x11cbcc: 0x8da60010  lw          $a2, 0x10($t5)
    ctx->pc = 0x11cbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x11cbd0: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x11cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x11cbd4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11cbd8: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x11cbd8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11cbdc: 0x1810  mfhi        $v1
    ctx->pc = 0x11cbdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11cbe0: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x11cbe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11cbe4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBE4u;
            // 0x11cbe8: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CC54u;
            goto label_11cc54;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x514f0001  beql        $t2, $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11CBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBECu;
            // 0x11cbf0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CBF4u;
            goto label_11cbf4;
        }
    }
    ctx->pc = 0x11CBF4u;
label_11cbf4:
    // 0x11cbf4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cbf8: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x11cbf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11cbfc: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x11cbfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x11cc00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11cc04: 0x8a001a  div         $zero, $a0, $t2
    ctx->pc = 0x11cc04u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11cc08: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x11cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x11cc0c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x11cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x11cc10: 0x1810  mfhi        $v1
    ctx->pc = 0x11cc10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11cc14: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CC14u;
    {
        const bool branch_taken_0x11cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC14u;
            // 0x11cc18: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc14) {
            ctx->pc = 0x11CC5Cu;
            goto label_11cc5c;
        }
    }
    ctx->pc = 0x11CC1Cu;
    // 0x11cc1c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11cc1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11cc20: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CC20u;
    {
        const bool branch_taken_0x11cc20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11cc20) {
            ctx->pc = 0x11CC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC20u;
            // 0x11cc24: 0x8d620058  lw          $v0, 0x58($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CC3Cu;
            goto label_11cc3c;
        }
    }
    ctx->pc = 0x11CC28u;
    // 0x11cc28: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x11cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x11cc2c: 0xfcae0000  sd          $t6, 0x0($a1)
    ctx->pc = 0x11cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 14));
    // 0x11cc30: 0xfcae0008  sd          $t6, 0x8($a1)
    ctx->pc = 0x11cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 14));
    // 0x11cc34: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x11cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x11cc38: 0x8d620058  lw          $v0, 0x58($t3)
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 88)));
label_11cc3c:
    // 0x11cc3c: 0x8d690054  lw          $t1, 0x54($t3)
    ctx->pc = 0x11cc3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x11cc40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11cc44: 0x1c2182a  slt         $v1, $t6, $v0
    ctx->pc = 0x11cc44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11cc48: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x11cc48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x11cc4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11CC4Cu;
    {
        const bool branch_taken_0x11cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC4Cu;
            // 0x11cc50: 0xad620058  sw          $v0, 0x58($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc4c) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC54u;
label_11cc54:
    // 0x11cc54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CC54u;
    {
        const bool branch_taken_0x11cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC54u;
            // 0x11cc58: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc54) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC5Cu;
label_11cc5c:
    // 0x11cc5c: 0x8d690054  lw          $t1, 0x54($t3)
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
label_11cc60:
    // 0x11cc60: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x11cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11cc64: 0x512f0001  beql        $t1, $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CC64u;
    {
        const bool branch_taken_0x11cc64 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 15));
        if (branch_taken_0x11cc64) {
            ctx->pc = 0x11CC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC64u;
            // 0x11cc68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CC6Cu;
            goto label_11cc6c;
        }
    }
    ctx->pc = 0x11CC6Cu;
label_11cc6c:
    // 0x11cc6c: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x11cc6cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11cc70: 0x1810  mfhi        $v1
    ctx->pc = 0x11cc70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11cc74: 0x13000009  beqz        $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CC74u;
    {
        const bool branch_taken_0x11cc74 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC74u;
            // 0x11cc78: 0x60602d  daddu       $t4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc74) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CC7Cu;
    // 0x11cc7c: 0x1991018  mult        $v0, $t4, $t9
    ctx->pc = 0x11cc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11cc80: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x11cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11cc84: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x11cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11cc88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CC88u;
    {
        const bool branch_taken_0x11cc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC88u;
            // 0x11cc8c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc88) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CC90u;
    // 0x11cc90: 0x8da20014  lw          $v0, 0x14($t5)
    ctx->pc = 0x11cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x11cc94: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x11CC94u;
    {
        const bool branch_taken_0x11cc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC94u;
            // 0x11cc98: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc94) {
            ctx->pc = 0x11CBC0u;
            goto label_11cbc0;
        }
    }
    ctx->pc = 0x11CC9Cu;
label_11cc9c:
    // 0x11cc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cca0:
    // 0x11cca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11cca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cca4: 0x3e00008  jr          $ra
    ctx->pc = 0x11CCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCA4u;
            // 0x11cca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CB70u: goto label_11cb70;
            case 0x11CBC0u: goto label_11cbc0;
            case 0x11CBCCu: goto label_11cbcc;
            case 0x11CBF4u: goto label_11cbf4;
            case 0x11CC3Cu: goto label_11cc3c;
            case 0x11CC54u: goto label_11cc54;
            case 0x11CC5Cu: goto label_11cc5c;
            case 0x11CC60u: goto label_11cc60;
            case 0x11CC6Cu: goto label_11cc6c;
            case 0x11CC9Cu: goto label_11cc9c;
            case 0x11CCA0u: goto label_11cca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CCACu;
}
