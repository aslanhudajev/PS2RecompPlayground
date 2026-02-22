#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionComp0
// Address: 0x120a20 - 0x120d54
void _motionComp0_0x120a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120a20u;

    // 0x120a20: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120a24: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x120a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x120a28: 0x8c431928  lw          $v1, 0x1928($v0)
    ctx->pc = 0x120a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6440)));
    // 0x120a2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x120a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x120a30: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x120a30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x120a34: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x120a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x120a38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x120a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120a3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x120a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x120a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120a48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x120a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x120a4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x120a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120A50u;
    {
        const bool branch_taken_0x120a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120a50) {
            ctx->pc = 0x120A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120A50u;
            // 0x120a54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x120A58u;
            goto label_120a58;
        }
    }
    ctx->pc = 0x120A58u;
label_120a58:
    // 0x120a58: 0x32140001  andi        $s4, $s0, 0x1
    ctx->pc = 0x120a58u;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x120a5c: 0x1010  mfhi        $v0
    ctx->pc = 0x120a5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x120a60: 0x9012  mflo        $s2
    ctx->pc = 0x120a60u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x120a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a68: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x120a6c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x120A6Cu;
    {
        const bool branch_taken_0x120a6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120A6Cu;
            // 0x120a70: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a6c) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A74u;
    // 0x120a74: 0x3c0f0017  lui         $t7, 0x17
    ctx->pc = 0x120a74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23 << 16));
    // 0x120a78: 0x3c190017  lui         $t9, 0x17
    ctx->pc = 0x120a78u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)23 << 16));
    // 0x120a7c: 0x0  nop
    ctx->pc = 0x120a7cu;
    // NOP
label_120a80:
    // 0x120a80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x120a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x120a84: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x120a84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)54272u)));
    // 0x120a88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x120a8c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x120a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x120a90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x120a90u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x120a94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120A94u;
    {
        const bool branch_taken_0x120a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120a94) {
            ctx->pc = 0x120A80u;
            goto label_120a80;
        }
    }
    ctx->pc = 0x120A9Cu;
    // 0x120a9c: 0x25e21df8  addiu       $v0, $t7, 0x1DF8
    ctx->pc = 0x120a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120aa0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x120aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120aa4: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x120aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120aa8: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x120aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120aac: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x120aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120ab0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x120AB0u;
    {
        const bool branch_taken_0x120ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120AB0u;
            // 0x120ab4: 0xac600138  sw          $zero, 0x138($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ab0) {
            ctx->pc = 0x120C40u;
            goto label_120c40;
        }
    }
    ctx->pc = 0x120AB8u;
label_120ab8:
    // 0x120ab8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120abc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x120abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x120ac0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120AC0u;
    {
        const bool branch_taken_0x120ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120ac0) {
            ctx->pc = 0x120AECu;
            goto label_120aec;
        }
    }
    ctx->pc = 0x120AC8u;
    // 0x120ac8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120acc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x120accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ad0: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x120AD0u;
    SET_GPR_U32(ctx, 31, 0x120AD8u);
    ctx->pc = 0x120AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120AD0u;
            // 0x120ad4: 0x24844e00  addiu       $a0, $a0, 0x4E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120AD8u; }
        if (ctx->pc != 0x120AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120AD8u; }
        if (ctx->pc != 0x120AD8u) { return; }
    }
    ctx->pc = 0x120AD8u;
    // 0x120ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120adc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x120adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x120ae0: 0xac621908  sw          $v0, 0x1908($v1)
    ctx->pc = 0x120ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 2));
    // 0x120ae4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x120AE4u;
    {
        const bool branch_taken_0x120ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120AE4u;
            // 0x120ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae4) {
            ctx->pc = 0x120D34u;
            goto label_120d34;
        }
    }
    ctx->pc = 0x120AECu;
label_120aec:
    // 0x120aec: 0xc048356  jal         func_120D58
    ctx->pc = 0x120AECu;
    SET_GPR_U32(ctx, 31, 0x120AF4u);
    ctx->pc = 0x120AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120AECu;
            // 0x120af0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120D58u;
    if (runtime->hasFunction(0x120D58u)) {
        auto targetFn = runtime->lookupFunction(0x120D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120AF4u; }
        if (ctx->pc != 0x120AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getAllRefs_0x120d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120AF4u; }
        if (ctx->pc != 0x120AF4u) { return; }
    }
    ctx->pc = 0x120AF4u;
    // 0x120af4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x120af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x120af8: 0x3c180017  lui         $t8, 0x17
    ctx->pc = 0x120af8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)23 << 16));
    // 0x120afc: 0x3c0f0017  lui         $t7, 0x17
    ctx->pc = 0x120afcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23 << 16));
    // 0x120b00: 0x3c190017  lui         $t9, 0x17
    ctx->pc = 0x120b00u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)23 << 16));
    // 0x120b04: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x120b04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54272u)));
label_120b08:
    // 0x120b08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120b08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x120b0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x120b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x120b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x120b10u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x120b14: 0x0  nop
    ctx->pc = 0x120b14u;
    // NOP
    // 0x120b18: 0x0  nop
    ctx->pc = 0x120b18u;
    // NOP
    // 0x120b1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120B1Cu;
    {
        const bool branch_taken_0x120b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120b1c) {
            ctx->pc = 0x120B08u;
            goto label_120b08;
        }
    }
    ctx->pc = 0x120B24u;
    // 0x120b24: 0x25e61df8  addiu       $a2, $t7, 0x1DF8
    ctx->pc = 0x120b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120b28: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x120b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120b2c: 0x8cc40280  lw          $a0, 0x280($a2)
    ctx->pc = 0x120b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x120b30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x120b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x120b34: 0x8f0317b4  lw          $v1, 0x17B4($t8)
    ctx->pc = 0x120b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 6068)));
    // 0x120b38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120b38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x120b3c: 0x872818  mult        $a1, $a0, $a3
    ctx->pc = 0x120b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120b40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x120b40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x120b44u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120b48: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x120b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x120b4c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x120b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x120b50: 0x8c8d012c  lw          $t5, 0x12C($a0)
    ctx->pc = 0x120b50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x120b54: 0x19a00022  blez        $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x120B54u;
    {
        const bool branch_taken_0x120b54 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x120B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120B54u;
            // 0x120b58: 0x656025  or          $t4, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b54) {
            ctx->pc = 0x120BE0u;
            goto label_120be0;
        }
    }
    ctx->pc = 0x120B5Cu;
    // 0x120b5c: 0x25aeffff  addiu       $t6, $t5, -0x1
    ctx->pc = 0x120b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_120b60:
    // 0x120b60: 0x25e61df8  addiu       $a2, $t7, 0x1DF8
    ctx->pc = 0x120b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120b64: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x120b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120b68: 0x8cc20280  lw          $v0, 0x280($a2)
    ctx->pc = 0x120b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x120b6c: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x120b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x120b70: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x120b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x120b74: 0x16e4026  xor         $t0, $t3, $t6
    ctx->pc = 0x120b74u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 11), GPR_VEC(ctx, 14)));
    // 0x120b78: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x120b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120b7c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x120b7cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x120b80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x120b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120b84: 0x3c0a3000  lui         $t2, 0x3000
    ctx->pc = 0x120b84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12288 << 16));
    // 0x120b88: 0x354a0030  ori         $t2, $t2, 0x30
    ctx->pc = 0x120b88u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)48u)));
    // 0x120b8c: 0x8280a  movz        $a1, $zero, $t0
    ctx->pc = 0x120b8cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x120b90: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x120b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x120b94: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x120b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x120b98: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x120b98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x120b9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120ba0: 0x16d402a  slt         $t0, $t3, $t5
    ctx->pc = 0x120ba0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x120ba4: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x120ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x120ba8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x120ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x120bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x120bb0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x120bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x120bb4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x120bb4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x120bb8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x120bb8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x120bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120bc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x120bc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x120bc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120bc8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x120bc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x120bcc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x120bccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x120bd0: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x120bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x120bd4: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x120bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x120bd8: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x120BD8u;
    {
        const bool branch_taken_0x120bd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120BD8u;
            // 0x120bdc: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bd8) {
            ctx->pc = 0x120B60u;
            goto label_120b60;
        }
    }
    ctx->pc = 0x120BE0u;
label_120be0:
    // 0x120be0: 0xf  sync
    ctx->pc = 0x120be0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x120be4: 0x25e91df8  addiu       $t1, $t7, 0x1DF8
    ctx->pc = 0x120be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120be8: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120bec: 0x8d240280  lw          $a0, 0x280($t1)
    ctx->pc = 0x120becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 640)));
    // 0x120bf0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x120bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x120bf4: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x120bf4u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)54400u)));
    // 0x120bf8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x120bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x120bfc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x120bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120c00: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x120c00u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)54320u)));
    // 0x120c04: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x120c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x120c08: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x120c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x120c0c: 0x34a5d420  ori         $a1, $a1, 0xD420
    ctx->pc = 0x120c0cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)54304u)));
    // 0x120c10: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x120c10u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)54272u)));
    // 0x120c14: 0x240a0105  addiu       $t2, $zero, 0x105
    ctx->pc = 0x120c14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x120c18: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x120c18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120c1c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x120c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x120c20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120c24: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x120c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x120c28: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x120c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x120c2c: 0x8f0317b4  lw          $v1, 0x17B4($t8)
    ctx->pc = 0x120c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 6068)));
    // 0x120c30: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x120c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x120c34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x120c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x120c38: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x120c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x120c3c: 0xad2b0138  sw          $t3, 0x138($t1)
    ctx->pc = 0x120c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 11));
label_120c40:
    // 0x120c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120c44: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120C44u;
    {
        const bool branch_taken_0x120c44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x120C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120C44u;
            // 0x120c48: 0x25e21df8  addiu       $v0, $t7, 0x1DF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c44) {
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C4Cu;
    // 0x120c4c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x120c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)2u)));
    // 0x120c50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120C50u;
    {
        const bool branch_taken_0x120c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120C50u;
            // 0x120c54: 0x25e21df8  addiu       $v0, $t7, 0x1DF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c50) {
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C58u;
    // 0x120c58: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x120c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120c5c: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x120c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120c60: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x120c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120c64: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x120c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120c68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120C68u;
    {
        const bool branch_taken_0x120c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120C68u;
            // 0x120c6c: 0xac730134  sw          $s3, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c68) {
            ctx->pc = 0x120C84u;
            goto label_120c84;
        }
    }
    ctx->pc = 0x120C70u;
label_120c70:
    // 0x120c70: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x120c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120c74: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x120c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120c78: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x120c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120c7c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x120c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120c80: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x120c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_120c84:
    // 0x120c84: 0x25e71df8  addiu       $a3, $t7, 0x1DF8
    ctx->pc = 0x120c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120c88: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120c8c: 0x8ce20280  lw          $v0, 0x280($a3)
    ctx->pc = 0x120c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x120c90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120c94: 0x8f2419ac  lw          $a0, 0x19AC($t9)
    ctx->pc = 0x120c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 6572)));
    // 0x120c98: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x120c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120c9c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x120c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x120ca0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x120CA0u;
    {
        const bool branch_taken_0x120ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x120CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120CA0u;
            // 0x120ca4: 0xac540130  sw          $s4, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ca0) {
            ctx->pc = 0x120CE0u;
            goto label_120ce0;
        }
    }
    ctx->pc = 0x120CA8u;
    // 0x120ca8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120cac: 0x8ce40280  lw          $a0, 0x280($a3)
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x120cb0: 0x8c451a44  lw          $a1, 0x1A44($v0)
    ctx->pc = 0x120cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x120cb4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x120cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x120cb8: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x120cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120cbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x120cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120cc0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x120cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x120cc4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x120cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x120cc8: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x120cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120ccc: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x120cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x120cd0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x120cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120cd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120cd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x120CD8u;
    {
        const bool branch_taken_0x120cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120CD8u;
            // 0x120cdc: 0xac830128  sw          $v1, 0x128($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cd8) {
            ctx->pc = 0x120D30u;
            goto label_120d30;
        }
    }
    ctx->pc = 0x120CE0u;
label_120ce0:
    // 0x120ce0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x120ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120ce4: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120CE4u;
    {
        const bool branch_taken_0x120ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x120ce4) {
            ctx->pc = 0x120CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120CE4u;
            // 0x120ce8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120CF8u;
            goto label_120cf8;
        }
    }
    ctx->pc = 0x120CECu;
    // 0x120cec: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120cf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x120CF0u;
    {
        const bool branch_taken_0x120cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120CF0u;
            // 0x120cf4: 0x8c421a4c  lw          $v0, 0x1A4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cf0) {
            ctx->pc = 0x120CFCu;
            goto label_120cfc;
        }
    }
    ctx->pc = 0x120CF8u;
label_120cf8:
    // 0x120cf8: 0x8c421a48  lw          $v0, 0x1A48($v0)
    ctx->pc = 0x120cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6728)));
label_120cfc:
    // 0x120cfc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x120cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x120d00: 0x25e61df8  addiu       $a2, $t7, 0x1DF8
    ctx->pc = 0x120d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120d04: 0x8cc50280  lw          $a1, 0x280($a2)
    ctx->pc = 0x120d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x120d08: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x120d0c: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x120d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120d10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120d14: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x120d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x120d18: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120d1c: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x120d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120d20: 0xa34018  mult        $t0, $a1, $v1
    ctx->pc = 0x120d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120d24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x120d28: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x120d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x120d2c: 0xaca20128  sw          $v0, 0x128($a1)
    ctx->pc = 0x120d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
label_120d30:
    // 0x120d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120d34:
    // 0x120d34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x120d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120d38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x120d38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120d3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x120d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120d40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x120d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120d44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x120d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x120D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120D4Cu;
            // 0x120d50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120A58u: goto label_120a58;
            case 0x120A80u: goto label_120a80;
            case 0x120AB8u: goto label_120ab8;
            case 0x120AECu: goto label_120aec;
            case 0x120B08u: goto label_120b08;
            case 0x120B60u: goto label_120b60;
            case 0x120BE0u: goto label_120be0;
            case 0x120C40u: goto label_120c40;
            case 0x120C70u: goto label_120c70;
            case 0x120C84u: goto label_120c84;
            case 0x120CE0u: goto label_120ce0;
            case 0x120CF8u: goto label_120cf8;
            case 0x120CFCu: goto label_120cfc;
            case 0x120D30u: goto label_120d30;
            case 0x120D34u: goto label_120d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120D54u;
}
