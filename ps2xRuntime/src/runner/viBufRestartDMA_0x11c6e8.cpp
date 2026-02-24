#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufRestartDMA
// Address: 0x11c6e8 - 0x11ca08
void viBufRestartDMA_0x11c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufRestartDMA_0x11c6e8");
#endif

    ctx->pc = 0x11c6e8u;

    // 0x11c6e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11c6ec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11c6f0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11c6f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11c6f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11c6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c700: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11c700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11c704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c708: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11c70c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c710: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x11c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11c714: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x11c714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c718: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x11c718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x11c71c: 0x3056007f  andi        $s6, $v0, 0x7F
    ctx->pc = 0x11c71cu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)127u)));
    // 0x11c720: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x11c720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x11c724: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x11c724u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
    // 0x11c728: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11c728u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x11c72c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x11c72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11c730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c734: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x11c734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11c738: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x11c738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11c73c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c740: 0xe39023  subu        $s2, $a3, $v1
    ctx->pc = 0x11c740u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11c744: 0xc2a821  addu        $s5, $a2, $v0
    ctx->pc = 0x11c744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11c748: 0x34b30100  ori         $s3, $a1, 0x100
    ctx->pc = 0x11c748u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)256u)));
    // 0x11c74c: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11C74Cu;
    SET_GPR_U32(ctx, 31, 0x11C754u);
    ctx->pc = 0x11C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C74Cu;
            // 0x11c750: 0x8e140020  lw          $s4, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C754u; }
        if (ctx->pc != 0x11C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C754u; }
        if (ctx->pc != 0x11C754u) { return; }
    }
    ctx->pc = 0x11C754u;
    // 0x11c754: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x11c754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c758: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x11c758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11c75c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11C75Cu;
    {
        const bool branch_taken_0x11c75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C75Cu;
            // 0x11c760: 0x3c080fff  lui         $t0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c75c) {
            ctx->pc = 0x11C808u;
            goto label_11c808;
        }
    }
    ctx->pc = 0x11C764u;
    // 0x11c764: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x11c764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11c768: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c76c: 0xf21023  subu        $v0, $a3, $s2
    ctx->pc = 0x11c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x11c770: 0x532c0  sll         $a2, $a1, 11
    ctx->pc = 0x11c770u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x11c774: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x11c774u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)65535u)));
    // 0x11c778: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c77c: 0x2a902  srl         $s5, $v0, 4
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11c780: 0x68a024  and         $s4, $v1, $t0
    ctx->pc = 0x11c780u;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x11c784: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x11c784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x11c788: 0x11270005  beq         $t1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C788u;
    {
        const bool branch_taken_0x11c788 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x11C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C788u;
            // 0x11c78c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c788) {
            ctx->pc = 0x11C7A0u;
            goto label_11c7a0;
        }
    }
    ctx->pc = 0x11C790u;
    // 0x11c790: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x11c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11c794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c798: 0x1221026  xor         $v0, $t1, $v0
    ctx->pc = 0x11c798u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x11c79c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x11c79cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_11c7a0:
    // 0x11c7a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11c7a4: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x11c7a8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x11c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11c7ac: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C7ACu;
    {
        const bool branch_taken_0x11c7ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7ac) {
            ctx->pc = 0x11C7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7ACu;
            // 0x11c7b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C7B4u;
            goto label_11c7b4;
        }
    }
    ctx->pc = 0x11C7B4u;
label_11c7b4:
    // 0x11c7b4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x11c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c7b8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x11c7b8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11c7bc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x11c7bcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x11c7c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11c7c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11c7c4: 0x1010  mfhi        $v0
    ctx->pc = 0x11c7c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11c7c8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C7C8u;
    {
        const bool branch_taken_0x11c7c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7C8u;
            // 0x11c7cc: 0x34730100  ori         $s3, $v1, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7c8) {
            ctx->pc = 0x11C7F0u;
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C7D0u;
    // 0x11c7d0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C7D0u;
    {
        const bool branch_taken_0x11c7d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7d0) {
            ctx->pc = 0x11C7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7D0u;
            // 0x11c7d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C7D8u;
            goto label_11c7d8;
        }
    }
    ctx->pc = 0x11C7D8u;
label_11c7d8:
    // 0x11c7d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c7dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11c7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11c7e0: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x11C7E0u;
    {
        const bool branch_taken_0x11c7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c7e0) {
            ctx->pc = 0x11C7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7E0u;
            // 0x11c7e4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C8F0u;
            goto label_11c8f0;
        }
    }
    ctx->pc = 0x11C7E8u;
    // 0x11c7e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7E8u;
            // 0x11c7ec: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C7F8u;
            goto label_11c7f8;
        }
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c7f4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_11c7f8:
    // 0x11c7f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c7fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11c800: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11C800u;
    {
        const bool branch_taken_0x11c800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C800u;
            // 0x11c804: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c800) {
            ctx->pc = 0x11C8ECu;
            goto label_11c8ec;
        }
    }
    ctx->pc = 0x11C808u;
label_11c808:
    // 0x11c808: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c80c: 0xc046ff2  jal         func_11BFC8
    ctx->pc = 0x11C80Cu;
    SET_GPR_U32(ctx, 31, 0x11C814u);
    ctx->pc = 0x11C810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C80Cu;
            // 0x11c810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BFC8u;
    if (runtime->hasFunction(0x11BFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11BFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C814u; }
        if (ctx->pc != 0x11C814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x11bfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C814u; }
        if (ctx->pc != 0x11C814u) { return; }
    }
    ctx->pc = 0x11C814u;
    // 0x11c814: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c81c: 0xc046ff2  jal         func_11BFC8
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C81Cu;
            // 0x11c820: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BFC8u;
    if (runtime->hasFunction(0x11BFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11BFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C824u; }
        if (ctx->pc != 0x11C824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x11bfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C824u; }
        if (ctx->pc != 0x11C824u) { return; }
    }
    ctx->pc = 0x11C824u;
    // 0x11c824: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x11c824u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c828: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x11C828u;
    {
        const bool branch_taken_0x11c828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x11C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C828u;
            // 0x11c82c: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c828) {
            ctx->pc = 0x11C8ECu;
            goto label_11c8ec;
        }
    }
    ctx->pc = 0x11C830u;
    // 0x11c830: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11c834: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x11c834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c838: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x11c838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c83c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x11c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c840: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x11c840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x11c844: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C844u;
    {
        const bool branch_taken_0x11c844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c844) {
            ctx->pc = 0x11C848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C844u;
            // 0x11c848: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C84Cu;
            goto label_11c84c;
        }
    }
    ctx->pc = 0x11C84Cu;
label_11c84c:
    // 0x11c84c: 0x1cc3821  addu        $a3, $t6, $t4
    ctx->pc = 0x11c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x11c850: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x11c850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11c854: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x11c854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11c858: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x11c858u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11c85c: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x11c85cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c860: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x11c860u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c864: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x11c864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x11c868: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x11c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x11c86c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x11c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x11c870: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x11c870u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x11c874: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x11c874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11c878: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x11c878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11c87c: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x11c87cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c880: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x11c880u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x11c884: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x11c884u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x11c888: 0x2810  mfhi        $a1
    ctx->pc = 0x11c888u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x11c88c: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x11c88cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11c890: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x11c890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11c894: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x11c894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11c898: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x11c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11c89c: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x11c89cu;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x11c8a0: 0x3010  mfhi        $a2
    ctx->pc = 0x11c8a0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x11c8a4: 0xec001a  div         $zero, $a3, $t4
    ctx->pc = 0x11c8a4u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11c8a8: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x11c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x11c8ac: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x11c8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x11c8b0: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x11c8b0u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x11c8b4: 0x5580a  movz        $t3, $zero, $a1
    ctx->pc = 0x11c8b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x11c8b8: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x11c8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x11c8bc: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x11c8bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 11)));
    // 0x11c8c0: 0x1010  mfhi        $v0
    ctx->pc = 0x11c8c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11c8c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C8C4u;
    {
        const bool branch_taken_0x11c8c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8C4u;
            // 0x11c8c8: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8c4) {
            ctx->pc = 0x11C8E0u;
            goto label_11c8e0;
        }
    }
    ctx->pc = 0x11C8CCu;
    // 0x11c8cc: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C8CCu;
    {
        const bool branch_taken_0x11c8cc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c8cc) {
            ctx->pc = 0x11C8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8CCu;
            // 0x11c8d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C8D4u;
            goto label_11c8d4;
        }
    }
    ctx->pc = 0x11C8D4u;
label_11c8d4:
    // 0x11c8d4: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x11c8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11c8d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C8D8u;
    {
        const bool branch_taken_0x11c8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c8d8) {
            ctx->pc = 0x11C8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8D8u;
            // 0x11c8dc: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C8F0u;
            goto label_11c8f0;
        }
    }
    ctx->pc = 0x11C8E0u;
label_11c8e0:
    // 0x11c8e0: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x11c8e4: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x11c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x11c8e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x11c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_11c8ec:
    // 0x11c8ec: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x11c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_11c8f0:
    // 0x11c8f0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11C8F0u;
    {
        const bool branch_taken_0x11c8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c8f0) {
            ctx->pc = 0x11C8F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8F0u;
            // 0x11c8f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C92Cu;
            goto label_11c92c;
        }
    }
    ctx->pc = 0x11C8F8u;
    // 0x11c8f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x11c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c8fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11C8FCu;
    {
        const bool branch_taken_0x11c8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8FCu;
            // 0x11c900: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8fc) {
            ctx->pc = 0x11C928u;
            goto label_11c928;
        }
    }
    ctx->pc = 0x11C904u;
    // 0x11c904: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11c904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11c908: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x11c908u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45072u)));
    // 0x11c90c: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x11c90cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45088u)));
    // 0x11c910: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c910u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x11c914: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x11c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c918: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11c918u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x11c91c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x11c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11c920: 0xc047002  jal         func_11C008
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C920u;
            // 0x11c924: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C008u;
    if (runtime->hasFunction(0x11C008u)) {
        auto targetFn = runtime->lookupFunction(0x11C008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C928u; }
        if (ctx->pc != 0x11C928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x11c008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C928u; }
        if (ctx->pc != 0x11C928u) { return; }
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11c92c:
    // 0x11c92c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11C92Cu;
    {
        const bool branch_taken_0x11c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C92Cu;
            // 0x11c930: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c92c) {
            ctx->pc = 0x11C984u;
            goto label_11c984;
        }
    }
    ctx->pc = 0x11C934u;
    // 0x11c934: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x11c934u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
label_11c938:
    // 0x11c938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c938u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x11c93c: 0x0  nop
    ctx->pc = 0x11c93cu;
    // NOP
    // 0x11c940: 0x0  nop
    ctx->pc = 0x11c940u;
    // NOP
    // 0x11c944: 0x0  nop
    ctx->pc = 0x11c944u;
    // NOP
    // 0x11c948: 0x0  nop
    ctx->pc = 0x11c948u;
    // NOP
    // 0x11c94c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C94Cu;
    {
        const bool branch_taken_0x11c94c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11c94c) {
            ctx->pc = 0x11C938u;
            goto label_11c938;
        }
    }
    ctx->pc = 0x11C954u;
    // 0x11c954: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c958: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11c958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11c95c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x11c95cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x11c960: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x11c960u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x11c964: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x11c964u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10000000
label_11c968:
    // 0x11c968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x11c96c: 0x0  nop
    ctx->pc = 0x11c96cu;
    // NOP
    // 0x11c970: 0x0  nop
    ctx->pc = 0x11c970u;
    // NOP
    // 0x11c974: 0x0  nop
    ctx->pc = 0x11c974u;
    // NOP
    // 0x11c978: 0x0  nop
    ctx->pc = 0x11c978u;
    // NOP
    // 0x11c97c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C97Cu;
    {
        const bool branch_taken_0x11c97c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11c97c) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C984u;
label_11c984:
    // 0x11c984: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11c988: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11c988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11c98c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x11c98cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46096u)));
    // 0x11c990: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x11c990u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46128u)));
    // 0x11c994: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x11c994u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x11c998: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c99c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x11c99cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x11c9a0: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x11c9a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46112u)));
    // 0x11c9a4: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x11c9a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21)); // MMIO: 0x10000000
    // 0x11c9a8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c9ac: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C9ACu;
    {
        const bool branch_taken_0x11c9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9ac) {
            ctx->pc = 0x11C9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9ACu;
            // 0x11c9b0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C9C0u;
            goto label_11c9c0;
        }
    }
    ctx->pc = 0x11C9B4u;
    // 0x11c9b4: 0xc04701c  jal         func_11C070
    ctx->pc = 0x11C9B4u;
    SET_GPR_U32(ctx, 31, 0x11C9BCu);
    ctx->pc = 0x11C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9B4u;
            // 0x11c9b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C070u;
    if (runtime->hasFunction(0x11C070u)) {
        auto targetFn = runtime->lookupFunction(0x11C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9BCu; }
        if (ctx->pc != 0x11C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9BCu; }
        if (ctx->pc != 0x11C9BCu) { return; }
    }
    ctx->pc = 0x11C9BCu;
    // 0x11c9bc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_11c9c0:
    // 0x11c9c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11c9c4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x11c9c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x11c9c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c9cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11c9ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x11c9d0: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x11c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x11c9d4: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x11C9D4u;
    SET_GPR_U32(ctx, 31, 0x11C9DCu);
    ctx->pc = 0x11C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9D4u;
            // 0x11c9d8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9DCu; }
        if (ctx->pc != 0x11C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9DCu; }
        if (ctx->pc != 0x11C9DCu) { return; }
    }
    ctx->pc = 0x11C9DCu;
    // 0x11c9dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11c9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c9e4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11c9e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c9e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11c9e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c9ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11c9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c9f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11c9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c9f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c9f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca00: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA00u;
            // 0x11ca04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7A0u: goto label_11c7a0;
            case 0x11C7B4u: goto label_11c7b4;
            case 0x11C7D8u: goto label_11c7d8;
            case 0x11C7F0u: goto label_11c7f0;
            case 0x11C7F8u: goto label_11c7f8;
            case 0x11C808u: goto label_11c808;
            case 0x11C84Cu: goto label_11c84c;
            case 0x11C8D4u: goto label_11c8d4;
            case 0x11C8E0u: goto label_11c8e0;
            case 0x11C8ECu: goto label_11c8ec;
            case 0x11C8F0u: goto label_11c8f0;
            case 0x11C928u: goto label_11c928;
            case 0x11C92Cu: goto label_11c92c;
            case 0x11C938u: goto label_11c938;
            case 0x11C968u: goto label_11c968;
            case 0x11C984u: goto label_11c984;
            case 0x11C9C0u: goto label_11c9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CA08u;
}
