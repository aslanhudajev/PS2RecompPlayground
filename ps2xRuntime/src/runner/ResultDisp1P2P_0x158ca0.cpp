#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResultDisp1P2P
// Address: 0x158ca0 - 0x1594bc
void ResultDisp1P2P_0x158ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResultDisp1P2P_0x158ca0");
#endif

    ctx->pc = 0x158ca0u;

    // 0x158ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x158ca4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158cac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158cb0: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158cb4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158cb8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x158cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x158cbc: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x158cc0: 0x24c60f28  addiu       $a2, $a2, 0xF28
    ctx->pc = 0x158cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3880));
    // 0x158cc4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x158cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x158cc8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ccc: 0xc060940  jal         func_182500
    ctx->pc = 0x158CCCu;
    SET_GPR_U32(ctx, 31, 0x158CD4u);
    ctx->pc = 0x158CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158CCCu;
            // 0x158cd0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158CD4u; }
        if (ctx->pc != 0x158CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158CD4u; }
        if (ctx->pc != 0x158CD4u) { return; }
    }
    ctx->pc = 0x158CD4u;
    // 0x158cd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158cd8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158cdc: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158ce0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158ce4: 0x2404fff6  addiu       $a0, $zero, -0xA
    ctx->pc = 0x158ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x158ce8: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x158cec: 0x24c60f30  addiu       $a2, $a2, 0xF30
    ctx->pc = 0x158cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3888));
    // 0x158cf0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158cf4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158cf8: 0xc060940  jal         func_182500
    ctx->pc = 0x158CF8u;
    SET_GPR_U32(ctx, 31, 0x158D00u);
    ctx->pc = 0x158CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158CF8u;
            // 0x158cfc: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D00u; }
        if (ctx->pc != 0x158D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D00u; }
        if (ctx->pc != 0x158D00u) { return; }
    }
    ctx->pc = 0x158D00u;
    // 0x158d00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158d04: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158d08: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158d0c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158d10: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x158d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x158d14: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x158d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x158d18: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x158d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x158d1c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158d20: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d24: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158D24u;
    SET_GPR_U32(ctx, 31, 0x158D2Cu);
    ctx->pc = 0x158D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158D24u;
            // 0x158d28: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D2Cu; }
        if (ctx->pc != 0x158D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D2Cu; }
        if (ctx->pc != 0x158D2Cu) { return; }
    }
    ctx->pc = 0x158D2Cu;
    // 0x158d2c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158d30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x158d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x158d34: 0x8c262cc8  lw          $a2, 0x2CC8($at)
    ctx->pc = 0x158d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11464)));
    // 0x158d38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x158d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158d3c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158D3Cu;
    SET_GPR_U32(ctx, 31, 0x158D44u);
    ctx->pc = 0x158D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158D3Cu;
            // 0x158d40: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D44u; }
        if (ctx->pc != 0x158D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D44u; }
        if (ctx->pc != 0x158D44u) { return; }
    }
    ctx->pc = 0x158D44u;
    // 0x158d44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158d48: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158D48u;
    SET_GPR_U32(ctx, 31, 0x158D50u);
    ctx->pc = 0x158D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158D48u;
            // 0x158d4c: 0x8c242cc8  lw          $a0, 0x2CC8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D50u; }
        if (ctx->pc != 0x158D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D50u; }
        if (ctx->pc != 0x158D50u) { return; }
    }
    ctx->pc = 0x158D50u;
    // 0x158d50: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158D50u;
    {
        const bool branch_taken_0x158d50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D50u;
            // 0x158d54: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d50) {
            ctx->pc = 0x158D64u;
            goto label_158d64;
        }
    }
    ctx->pc = 0x158D58u;
    // 0x158d58: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158D58u;
    {
        const bool branch_taken_0x158d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d58) {
            ctx->pc = 0x158D64u;
            goto label_158d64;
        }
    }
    ctx->pc = 0x158D60u;
    // 0x158d60: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158d64:
    // 0x158d64: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158D64u;
    {
        const bool branch_taken_0x158d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d64) {
            ctx->pc = 0x158DB0u;
            goto label_158db0;
        }
    }
    ctx->pc = 0x158D6Cu;
    // 0x158d6c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158D6Cu;
    {
        const bool branch_taken_0x158d6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D6Cu;
            // 0x158d70: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d6c) {
            ctx->pc = 0x158D7Cu;
            goto label_158d7c;
        }
    }
    ctx->pc = 0x158D74u;
    // 0x158d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158d78: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158d7c:
    // 0x158d7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158d80: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158d84: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158d88: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x158d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x158d8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158d90: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x158d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158d94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x158d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158d98: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158d9c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158d9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158da0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158DA0u;
    SET_GPR_U32(ctx, 31, 0x158DA8u);
    ctx->pc = 0x158DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158DA0u;
            // 0x158da4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DA8u; }
        if (ctx->pc != 0x158DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DA8u; }
        if (ctx->pc != 0x158DA8u) { return; }
    }
    ctx->pc = 0x158DA8u;
    // 0x158da8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158DA8u;
    {
        const bool branch_taken_0x158da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158da8) {
            ctx->pc = 0x158DF0u;
            goto label_158df0;
        }
    }
    ctx->pc = 0x158DB0u;
label_158db0:
    // 0x158db0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158DB0u;
    {
        const bool branch_taken_0x158db0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158DB0u;
            // 0x158db4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158db0) {
            ctx->pc = 0x158DC0u;
            goto label_158dc0;
        }
    }
    ctx->pc = 0x158DB8u;
    // 0x158db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158dbc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158dbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158dc0:
    // 0x158dc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158dc4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158dc8: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158dcc: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x158dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158dd4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x158dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158dd8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x158dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158ddc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158de0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158de4: 0xc060940  jal         func_182500
    ctx->pc = 0x158DE4u;
    SET_GPR_U32(ctx, 31, 0x158DECu);
    ctx->pc = 0x158DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158DE4u;
            // 0x158de8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DECu; }
        if (ctx->pc != 0x158DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158DECu; }
        if (ctx->pc != 0x158DECu) { return; }
    }
    ctx->pc = 0x158DECu;
    // 0x158dec: 0x0  nop
    ctx->pc = 0x158decu;
    // NOP
label_158df0:
    // 0x158df0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158df4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158df4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158df8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158dfc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158e00: 0x2404ffed  addiu       $a0, $zero, -0x13
    ctx->pc = 0x158e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
    // 0x158e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158e08: 0x24c60f70  addiu       $a2, $a2, 0xF70
    ctx->pc = 0x158e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3952));
    // 0x158e0c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158e10: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e14: 0xc060940  jal         func_182500
    ctx->pc = 0x158E14u;
    SET_GPR_U32(ctx, 31, 0x158E1Cu);
    ctx->pc = 0x158E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E14u;
            // 0x158e18: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E1Cu; }
        if (ctx->pc != 0x158E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E1Cu; }
        if (ctx->pc != 0x158E1Cu) { return; }
    }
    ctx->pc = 0x158E1Cu;
    // 0x158e1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158e20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x158e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x158e24: 0x8c262cc0  lw          $a2, 0x2CC0($at)
    ctx->pc = 0x158e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11456)));
    // 0x158e28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x158e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158e2c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158E2Cu;
    SET_GPR_U32(ctx, 31, 0x158E34u);
    ctx->pc = 0x158E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E2Cu;
            // 0x158e30: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E34u; }
        if (ctx->pc != 0x158E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E34u; }
        if (ctx->pc != 0x158E34u) { return; }
    }
    ctx->pc = 0x158E34u;
    // 0x158e34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158e38: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158E38u;
    SET_GPR_U32(ctx, 31, 0x158E40u);
    ctx->pc = 0x158E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E38u;
            // 0x158e3c: 0x8c242cc0  lw          $a0, 0x2CC0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E40u; }
        if (ctx->pc != 0x158E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E40u; }
        if (ctx->pc != 0x158E40u) { return; }
    }
    ctx->pc = 0x158E40u;
    // 0x158e40: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158E40u;
    {
        const bool branch_taken_0x158e40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E40u;
            // 0x158e44: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e40) {
            ctx->pc = 0x158E54u;
            goto label_158e54;
        }
    }
    ctx->pc = 0x158E48u;
    // 0x158e48: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158E48u;
    {
        const bool branch_taken_0x158e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e48) {
            ctx->pc = 0x158E54u;
            goto label_158e54;
        }
    }
    ctx->pc = 0x158E50u;
    // 0x158e50: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158e54:
    // 0x158e54: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158E54u;
    {
        const bool branch_taken_0x158e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e54) {
            ctx->pc = 0x158EA0u;
            goto label_158ea0;
        }
    }
    ctx->pc = 0x158E5Cu;
    // 0x158e5c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158E5Cu;
    {
        const bool branch_taken_0x158e5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E5Cu;
            // 0x158e60: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e5c) {
            ctx->pc = 0x158E6Cu;
            goto label_158e6c;
        }
    }
    ctx->pc = 0x158E64u;
    // 0x158e64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158e68: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158e68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158e6c:
    // 0x158e6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158e70: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158e74: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158e74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158e78: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x158e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x158e7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x158e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158e80: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158e84: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x158e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158e88: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158e8c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e90: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158E90u;
    SET_GPR_U32(ctx, 31, 0x158E98u);
    ctx->pc = 0x158E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E90u;
            // 0x158e94: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E98u; }
        if (ctx->pc != 0x158E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E98u; }
        if (ctx->pc != 0x158E98u) { return; }
    }
    ctx->pc = 0x158E98u;
    // 0x158e98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158E98u;
    {
        const bool branch_taken_0x158e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e98) {
            ctx->pc = 0x158EE0u;
            goto label_158ee0;
        }
    }
    ctx->pc = 0x158EA0u;
label_158ea0:
    // 0x158ea0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158EA0u;
    {
        const bool branch_taken_0x158ea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EA0u;
            // 0x158ea4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ea0) {
            ctx->pc = 0x158EB0u;
            goto label_158eb0;
        }
    }
    ctx->pc = 0x158EA8u;
    // 0x158ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158eac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158eb0:
    // 0x158eb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158eb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158eb8: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158ebc: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x158ec0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158ec4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x158ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158ec8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x158ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158ecc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158ed0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ed4: 0xc060940  jal         func_182500
    ctx->pc = 0x158ED4u;
    SET_GPR_U32(ctx, 31, 0x158EDCu);
    ctx->pc = 0x158ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158ED4u;
            // 0x158ed8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158EDCu; }
        if (ctx->pc != 0x158EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158EDCu; }
        if (ctx->pc != 0x158EDCu) { return; }
    }
    ctx->pc = 0x158EDCu;
    // 0x158edc: 0x0  nop
    ctx->pc = 0x158edcu;
    // NOP
label_158ee0:
    // 0x158ee0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158ee4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158ee4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158ee8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158eec: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158ef0: 0x2404ffec  addiu       $a0, $zero, -0x14
    ctx->pc = 0x158ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x158ef4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x158ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158ef8: 0x24c60f90  addiu       $a2, $a2, 0xF90
    ctx->pc = 0x158ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3984));
    // 0x158efc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158f00: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f04: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158F04u;
    SET_GPR_U32(ctx, 31, 0x158F0Cu);
    ctx->pc = 0x158F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158F04u;
            // 0x158f08: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F0Cu; }
        if (ctx->pc != 0x158F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F0Cu; }
        if (ctx->pc != 0x158F0Cu) { return; }
    }
    ctx->pc = 0x158F0Cu;
    // 0x158f0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158f10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x158f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x158f14: 0x8c262cb8  lw          $a2, 0x2CB8($at)
    ctx->pc = 0x158f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11448)));
    // 0x158f18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x158f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158f1c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158F1Cu;
    SET_GPR_U32(ctx, 31, 0x158F24u);
    ctx->pc = 0x158F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158F1Cu;
            // 0x158f20: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F24u; }
        if (ctx->pc != 0x158F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F24u; }
        if (ctx->pc != 0x158F24u) { return; }
    }
    ctx->pc = 0x158F24u;
    // 0x158f24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158f28: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158F28u;
    SET_GPR_U32(ctx, 31, 0x158F30u);
    ctx->pc = 0x158F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158F28u;
            // 0x158f2c: 0x8c242cb8  lw          $a0, 0x2CB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F30u; }
        if (ctx->pc != 0x158F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F30u; }
        if (ctx->pc != 0x158F30u) { return; }
    }
    ctx->pc = 0x158F30u;
    // 0x158f30: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158F30u;
    {
        const bool branch_taken_0x158f30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F30u;
            // 0x158f34: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f30) {
            ctx->pc = 0x158F44u;
            goto label_158f44;
        }
    }
    ctx->pc = 0x158F38u;
    // 0x158f38: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F38u;
    {
        const bool branch_taken_0x158f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f38) {
            ctx->pc = 0x158F44u;
            goto label_158f44;
        }
    }
    ctx->pc = 0x158F40u;
    // 0x158f40: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158f44:
    // 0x158f44: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158F44u;
    {
        const bool branch_taken_0x158f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f44) {
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F4Cu;
    // 0x158f4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158F4Cu;
    {
        const bool branch_taken_0x158f4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F4Cu;
            // 0x158f50: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f4c) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F54u;
    // 0x158f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158f58: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158f58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158f5c:
    // 0x158f5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158f60: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158f64: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158f64u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158f68: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x158f6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x158f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x158f70: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x158f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158f74: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x158f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158f78: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158f7c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f80: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158F80u;
    SET_GPR_U32(ctx, 31, 0x158F88u);
    ctx->pc = 0x158F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158F80u;
            // 0x158f84: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F88u; }
        if (ctx->pc != 0x158F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F88u; }
        if (ctx->pc != 0x158F88u) { return; }
    }
    ctx->pc = 0x158F88u;
    // 0x158f88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158F88u;
    {
        const bool branch_taken_0x158f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f88) {
            ctx->pc = 0x158FD0u;
            goto label_158fd0;
        }
    }
    ctx->pc = 0x158F90u;
label_158f90:
    // 0x158f90: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158F90u;
    {
        const bool branch_taken_0x158f90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F90u;
            // 0x158f94: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f90) {
            ctx->pc = 0x158FA0u;
            goto label_158fa0;
        }
    }
    ctx->pc = 0x158F98u;
    // 0x158f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158f9c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158f9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158fa0:
    // 0x158fa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158fa4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158fa8: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158fa8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158fac: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x158facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x158fb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x158fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x158fb4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x158fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158fb8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158fbc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158fc0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fc4: 0xc060940  jal         func_182500
    ctx->pc = 0x158FC4u;
    SET_GPR_U32(ctx, 31, 0x158FCCu);
    ctx->pc = 0x158FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158FC4u;
            // 0x158fc8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FCCu; }
        if (ctx->pc != 0x158FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FCCu; }
        if (ctx->pc != 0x158FCCu) { return; }
    }
    ctx->pc = 0x158FCCu;
    // 0x158fcc: 0x0  nop
    ctx->pc = 0x158fccu;
    // NOP
label_158fd0:
    // 0x158fd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158fd4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158fd8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158fdc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158fe0: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x158fe4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x158fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158fe8: 0x24c60fa8  addiu       $a2, $a2, 0xFA8
    ctx->pc = 0x158fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4008));
    // 0x158fec: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158ff0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158ff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ff4: 0xc060940  jal         func_182500
    ctx->pc = 0x158FF4u;
    SET_GPR_U32(ctx, 31, 0x158FFCu);
    ctx->pc = 0x158FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158FF4u;
            // 0x158ff8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FFCu; }
        if (ctx->pc != 0x158FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FFCu; }
        if (ctx->pc != 0x158FFCu) { return; }
    }
    ctx->pc = 0x158FFCu;
    // 0x158ffc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159000: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x159004: 0x8c262cb0  lw          $a2, 0x2CB0($at)
    ctx->pc = 0x159004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11440)));
    // 0x159008: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15900c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x15900Cu;
    SET_GPR_U32(ctx, 31, 0x159014u);
    ctx->pc = 0x159010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15900Cu;
            // 0x159010: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159014u; }
        if (ctx->pc != 0x159014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159014u; }
        if (ctx->pc != 0x159014u) { return; }
    }
    ctx->pc = 0x159014u;
    // 0x159014: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159018: 0xc056574  jal         func_1595D0
    ctx->pc = 0x159018u;
    SET_GPR_U32(ctx, 31, 0x159020u);
    ctx->pc = 0x15901Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159018u;
            // 0x15901c: 0x8c242cb0  lw          $a0, 0x2CB0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159020u; }
        if (ctx->pc != 0x159020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159020u; }
        if (ctx->pc != 0x159020u) { return; }
    }
    ctx->pc = 0x159020u;
    // 0x159020: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159020u;
    {
        const bool branch_taken_0x159020 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159020u;
            // 0x159024: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159020) {
            ctx->pc = 0x159034u;
            goto label_159034;
        }
    }
    ctx->pc = 0x159028u;
    // 0x159028: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159028u;
    {
        const bool branch_taken_0x159028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159028) {
            ctx->pc = 0x159034u;
            goto label_159034;
        }
    }
    ctx->pc = 0x159030u;
    // 0x159030: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_159034:
    // 0x159034: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x159034u;
    {
        const bool branch_taken_0x159034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159034) {
            ctx->pc = 0x159080u;
            goto label_159080;
        }
    }
    ctx->pc = 0x15903Cu;
    // 0x15903c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15903Cu;
    {
        const bool branch_taken_0x15903c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15903Cu;
            // 0x159040: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15903c) {
            ctx->pc = 0x15904Cu;
            goto label_15904c;
        }
    }
    ctx->pc = 0x159044u;
    // 0x159044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159048: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x159048u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15904c:
    // 0x15904c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159050: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159054: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159054u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x159058: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x159058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x15905c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x159060: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x159060u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159064: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159068: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x159068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15906c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15906cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159070: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x159070u;
    SET_GPR_U32(ctx, 31, 0x159078u);
    ctx->pc = 0x159074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159070u;
            // 0x159074: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159078u; }
        if (ctx->pc != 0x159078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159078u; }
        if (ctx->pc != 0x159078u) { return; }
    }
    ctx->pc = 0x159078u;
    // 0x159078: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159078u;
    {
        const bool branch_taken_0x159078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159078) {
            ctx->pc = 0x1590C0u;
            goto label_1590c0;
        }
    }
    ctx->pc = 0x159080u;
label_159080:
    // 0x159080: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159080u;
    {
        const bool branch_taken_0x159080 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159080u;
            // 0x159084: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159080) {
            ctx->pc = 0x159090u;
            goto label_159090;
        }
    }
    ctx->pc = 0x159088u;
    // 0x159088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15908c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_159090:
    // 0x159090: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159094: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159098: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159098u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x15909c: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x15909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1590a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1590a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1590a4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1590a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1590ac: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1590acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1590b0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1590b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590b4: 0xc060940  jal         func_182500
    ctx->pc = 0x1590B4u;
    SET_GPR_U32(ctx, 31, 0x1590BCu);
    ctx->pc = 0x1590B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1590B4u;
            // 0x1590b8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590BCu; }
        if (ctx->pc != 0x1590BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590BCu; }
        if (ctx->pc != 0x1590BCu) { return; }
    }
    ctx->pc = 0x1590BCu;
    // 0x1590bc: 0x0  nop
    ctx->pc = 0x1590bcu;
    // NOP
label_1590c0:
    // 0x1590c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1590c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1590c4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1590c8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1590c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1590cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1590d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1590d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1590d4: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x1590d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1590d8: 0x24c60f40  addiu       $a2, $a2, 0xF40
    ctx->pc = 0x1590d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3904));
    // 0x1590dc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1590dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1590e0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590e4: 0xc060940  jal         func_182500
    ctx->pc = 0x1590E4u;
    SET_GPR_U32(ctx, 31, 0x1590ECu);
    ctx->pc = 0x1590E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1590E4u;
            // 0x1590e8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590ECu; }
        if (ctx->pc != 0x1590ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590ECu; }
        if (ctx->pc != 0x1590ECu) { return; }
    }
    ctx->pc = 0x1590ECu;
    // 0x1590ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1590ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1590f0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1590f4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1590f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1590f8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1590fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1590fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x159100: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x159104: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x159108: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x159108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15910c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159110: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x159110u;
    SET_GPR_U32(ctx, 31, 0x159118u);
    ctx->pc = 0x159114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159110u;
            // 0x159114: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159118u; }
        if (ctx->pc != 0x159118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159118u; }
        if (ctx->pc != 0x159118u) { return; }
    }
    ctx->pc = 0x159118u;
    // 0x159118: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15911c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15911cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x159120: 0x8c262ccc  lw          $a2, 0x2CCC($at)
    ctx->pc = 0x159120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11468)));
    // 0x159124: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159128: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x159128u;
    SET_GPR_U32(ctx, 31, 0x159130u);
    ctx->pc = 0x15912Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159128u;
            // 0x15912c: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159130u; }
        if (ctx->pc != 0x159130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159130u; }
        if (ctx->pc != 0x159130u) { return; }
    }
    ctx->pc = 0x159130u;
    // 0x159130: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159134: 0xc056574  jal         func_1595D0
    ctx->pc = 0x159134u;
    SET_GPR_U32(ctx, 31, 0x15913Cu);
    ctx->pc = 0x159138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159134u;
            // 0x159138: 0x8c242ccc  lw          $a0, 0x2CCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11468)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15913Cu; }
        if (ctx->pc != 0x15913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15913Cu; }
        if (ctx->pc != 0x15913Cu) { return; }
    }
    ctx->pc = 0x15913Cu;
    // 0x15913c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15913Cu;
    {
        const bool branch_taken_0x15913c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15913Cu;
            // 0x159140: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15913c) {
            ctx->pc = 0x159150u;
            goto label_159150;
        }
    }
    ctx->pc = 0x159144u;
    // 0x159144: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159144u;
    {
        const bool branch_taken_0x159144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159144) {
            ctx->pc = 0x159150u;
            goto label_159150;
        }
    }
    ctx->pc = 0x15914Cu;
    // 0x15914c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x15914cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_159150:
    // 0x159150: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x159150u;
    {
        const bool branch_taken_0x159150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159150) {
            ctx->pc = 0x1591A0u;
            goto label_1591a0;
        }
    }
    ctx->pc = 0x159158u;
    // 0x159158: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159158u;
    {
        const bool branch_taken_0x159158 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15915Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159158u;
            // 0x15915c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159158) {
            ctx->pc = 0x159168u;
            goto label_159168;
        }
    }
    ctx->pc = 0x159160u;
    // 0x159160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159164: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x159164u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_159168:
    // 0x159168: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15916c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x15916cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159170: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159170u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x159174: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x159174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x159178: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x159178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15917c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x15917cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159180: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x159180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159184: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x159184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x159188: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x159188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15918c: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x15918Cu;
    SET_GPR_U32(ctx, 31, 0x159194u);
    ctx->pc = 0x159190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15918Cu;
            // 0x159190: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159194u; }
        if (ctx->pc != 0x159194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159194u; }
        if (ctx->pc != 0x159194u) { return; }
    }
    ctx->pc = 0x159194u;
    // 0x159194: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x159194u;
    {
        const bool branch_taken_0x159194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159194) {
            ctx->pc = 0x1591E0u;
            goto label_1591e0;
        }
    }
    ctx->pc = 0x15919Cu;
    // 0x15919c: 0x0  nop
    ctx->pc = 0x15919cu;
    // NOP
label_1591a0:
    // 0x1591a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1591A0u;
    {
        const bool branch_taken_0x1591a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1591A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1591A0u;
            // 0x1591a4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591a0) {
            ctx->pc = 0x1591B0u;
            goto label_1591b0;
        }
    }
    ctx->pc = 0x1591A8u;
    // 0x1591a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1591a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1591ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1591acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1591b0:
    // 0x1591b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1591b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1591b4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1591b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1591b8: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1591b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1591bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1591c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1591c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1591c4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1591c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1591c8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1591c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1591cc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1591ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1591d0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1591d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591d4: 0xc060940  jal         func_182500
    ctx->pc = 0x1591D4u;
    SET_GPR_U32(ctx, 31, 0x1591DCu);
    ctx->pc = 0x1591D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591D4u;
            // 0x1591d8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591DCu; }
        if (ctx->pc != 0x1591DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591DCu; }
        if (ctx->pc != 0x1591DCu) { return; }
    }
    ctx->pc = 0x1591DCu;
    // 0x1591dc: 0x0  nop
    ctx->pc = 0x1591dcu;
    // NOP
label_1591e0:
    // 0x1591e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1591e4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1591e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1591e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1591e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1591ec: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1591ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1591f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1591f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1591f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1591f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1591f8: 0x24c60f70  addiu       $a2, $a2, 0xF70
    ctx->pc = 0x1591f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3952));
    // 0x1591fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1591fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x159200: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x159200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159204: 0xc060940  jal         func_182500
    ctx->pc = 0x159204u;
    SET_GPR_U32(ctx, 31, 0x15920Cu);
    ctx->pc = 0x159208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159204u;
            // 0x159208: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15920Cu; }
        if (ctx->pc != 0x15920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15920Cu; }
        if (ctx->pc != 0x15920Cu) { return; }
    }
    ctx->pc = 0x15920Cu;
    // 0x15920c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15920cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159210: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x159210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x159214: 0x8c262cc4  lw          $a2, 0x2CC4($at)
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11460)));
    // 0x159218: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15921c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x15921Cu;
    SET_GPR_U32(ctx, 31, 0x159224u);
    ctx->pc = 0x159220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15921Cu;
            // 0x159220: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159224u; }
        if (ctx->pc != 0x159224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159224u; }
        if (ctx->pc != 0x159224u) { return; }
    }
    ctx->pc = 0x159224u;
    // 0x159224: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159228: 0xc056574  jal         func_1595D0
    ctx->pc = 0x159228u;
    SET_GPR_U32(ctx, 31, 0x159230u);
    ctx->pc = 0x15922Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159228u;
            // 0x15922c: 0x8c242cc4  lw          $a0, 0x2CC4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159230u; }
        if (ctx->pc != 0x159230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159230u; }
        if (ctx->pc != 0x159230u) { return; }
    }
    ctx->pc = 0x159230u;
    // 0x159230: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159230u;
    {
        const bool branch_taken_0x159230 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159230u;
            // 0x159234: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159230) {
            ctx->pc = 0x159244u;
            goto label_159244;
        }
    }
    ctx->pc = 0x159238u;
    // 0x159238: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159238u;
    {
        const bool branch_taken_0x159238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159238) {
            ctx->pc = 0x159244u;
            goto label_159244;
        }
    }
    ctx->pc = 0x159240u;
    // 0x159240: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x159240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_159244:
    // 0x159244: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x159244u;
    {
        const bool branch_taken_0x159244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159244) {
            ctx->pc = 0x159290u;
            goto label_159290;
        }
    }
    ctx->pc = 0x15924Cu;
    // 0x15924c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15924Cu;
    {
        const bool branch_taken_0x15924c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15924Cu;
            // 0x159250: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15924c) {
            ctx->pc = 0x15925Cu;
            goto label_15925c;
        }
    }
    ctx->pc = 0x159254u;
    // 0x159254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159258: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x159258u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15925c:
    // 0x15925c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159260: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159264: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x159268: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x159268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15926c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159270: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x159270u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159274: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x159274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159278: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x159278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15927c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15927cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159280: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x159280u;
    SET_GPR_U32(ctx, 31, 0x159288u);
    ctx->pc = 0x159284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159280u;
            // 0x159284: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159288u; }
        if (ctx->pc != 0x159288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159288u; }
        if (ctx->pc != 0x159288u) { return; }
    }
    ctx->pc = 0x159288u;
    // 0x159288: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159288u;
    {
        const bool branch_taken_0x159288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159288) {
            ctx->pc = 0x1592D0u;
            goto label_1592d0;
        }
    }
    ctx->pc = 0x159290u;
label_159290:
    // 0x159290: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159290u;
    {
        const bool branch_taken_0x159290 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159290u;
            // 0x159294: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159290) {
            ctx->pc = 0x1592A0u;
            goto label_1592a0;
        }
    }
    ctx->pc = 0x159298u;
    // 0x159298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15929c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15929cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1592a0:
    // 0x1592a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1592a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1592a4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1592a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1592a8: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1592a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1592ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1592acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1592b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1592b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1592b4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1592b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1592b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1592b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1592bc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1592bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1592c0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1592c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592c4: 0xc060940  jal         func_182500
    ctx->pc = 0x1592C4u;
    SET_GPR_U32(ctx, 31, 0x1592CCu);
    ctx->pc = 0x1592C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592C4u;
            // 0x1592c8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592CCu; }
        if (ctx->pc != 0x1592CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592CCu; }
        if (ctx->pc != 0x1592CCu) { return; }
    }
    ctx->pc = 0x1592CCu;
    // 0x1592cc: 0x0  nop
    ctx->pc = 0x1592ccu;
    // NOP
label_1592d0:
    // 0x1592d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1592d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1592d4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1592d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1592d8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1592d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1592dc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1592dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1592e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1592e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1592e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1592e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1592e8: 0x24c60f90  addiu       $a2, $a2, 0xF90
    ctx->pc = 0x1592e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3984));
    // 0x1592ec: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1592ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1592f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1592f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592f4: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x1592F4u;
    SET_GPR_U32(ctx, 31, 0x1592FCu);
    ctx->pc = 0x1592F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1592F4u;
            // 0x1592f8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592FCu; }
        if (ctx->pc != 0x1592FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592FCu; }
        if (ctx->pc != 0x1592FCu) { return; }
    }
    ctx->pc = 0x1592FCu;
    // 0x1592fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1592fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159300: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x159300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x159304: 0x8c262cbc  lw          $a2, 0x2CBC($at)
    ctx->pc = 0x159304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11452)));
    // 0x159308: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15930c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x15930Cu;
    SET_GPR_U32(ctx, 31, 0x159314u);
    ctx->pc = 0x159310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15930Cu;
            // 0x159310: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159314u; }
        if (ctx->pc != 0x159314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159314u; }
        if (ctx->pc != 0x159314u) { return; }
    }
    ctx->pc = 0x159314u;
    // 0x159314: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159318: 0xc056574  jal         func_1595D0
    ctx->pc = 0x159318u;
    SET_GPR_U32(ctx, 31, 0x159320u);
    ctx->pc = 0x15931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159318u;
            // 0x15931c: 0x8c242cbc  lw          $a0, 0x2CBC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11452)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159320u; }
        if (ctx->pc != 0x159320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159320u; }
        if (ctx->pc != 0x159320u) { return; }
    }
    ctx->pc = 0x159320u;
    // 0x159320: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159320u;
    {
        const bool branch_taken_0x159320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159320u;
            // 0x159324: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159320) {
            ctx->pc = 0x159334u;
            goto label_159334;
        }
    }
    ctx->pc = 0x159328u;
    // 0x159328: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159328u;
    {
        const bool branch_taken_0x159328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159328) {
            ctx->pc = 0x159334u;
            goto label_159334;
        }
    }
    ctx->pc = 0x159330u;
    // 0x159330: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x159330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_159334:
    // 0x159334: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x159334u;
    {
        const bool branch_taken_0x159334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159334) {
            ctx->pc = 0x159380u;
            goto label_159380;
        }
    }
    ctx->pc = 0x15933Cu;
    // 0x15933c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15933Cu;
    {
        const bool branch_taken_0x15933c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15933Cu;
            // 0x159340: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15933c) {
            ctx->pc = 0x15934Cu;
            goto label_15934c;
        }
    }
    ctx->pc = 0x159344u;
    // 0x159344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159348: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x159348u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15934c:
    // 0x15934c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159350: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159354: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x159358: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x159358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15935c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159360: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159364: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x159364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159368: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x159368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15936c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15936cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159370: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x159370u;
    SET_GPR_U32(ctx, 31, 0x159378u);
    ctx->pc = 0x159374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159370u;
            // 0x159374: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159378u; }
        if (ctx->pc != 0x159378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159378u; }
        if (ctx->pc != 0x159378u) { return; }
    }
    ctx->pc = 0x159378u;
    // 0x159378: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159378u;
    {
        const bool branch_taken_0x159378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159378) {
            ctx->pc = 0x1593C0u;
            goto label_1593c0;
        }
    }
    ctx->pc = 0x159380u;
label_159380:
    // 0x159380: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159380u;
    {
        const bool branch_taken_0x159380 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159380u;
            // 0x159384: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159380) {
            ctx->pc = 0x159390u;
            goto label_159390;
        }
    }
    ctx->pc = 0x159388u;
    // 0x159388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15938c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15938cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_159390:
    // 0x159390: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159394: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159398: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x15939c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1593a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1593a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1593a4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1593a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1593a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1593a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1593ac: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1593b0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1593b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593b4: 0xc060940  jal         func_182500
    ctx->pc = 0x1593B4u;
    SET_GPR_U32(ctx, 31, 0x1593BCu);
    ctx->pc = 0x1593B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1593B4u;
            // 0x1593b8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593BCu; }
        if (ctx->pc != 0x1593BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593BCu; }
        if (ctx->pc != 0x1593BCu) { return; }
    }
    ctx->pc = 0x1593BCu;
    // 0x1593bc: 0x0  nop
    ctx->pc = 0x1593bcu;
    // NOP
label_1593c0:
    // 0x1593c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1593c4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1593c8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1593c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1593cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1593d0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1593d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1593d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1593d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1593d8: 0x24c60fa8  addiu       $a2, $a2, 0xFA8
    ctx->pc = 0x1593d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4008));
    // 0x1593dc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1593dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1593e0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1593e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593e4: 0xc060940  jal         func_182500
    ctx->pc = 0x1593E4u;
    SET_GPR_U32(ctx, 31, 0x1593ECu);
    ctx->pc = 0x1593E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1593E4u;
            // 0x1593e8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593ECu; }
        if (ctx->pc != 0x1593ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593ECu; }
        if (ctx->pc != 0x1593ECu) { return; }
    }
    ctx->pc = 0x1593ECu;
    // 0x1593ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1593ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1593f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1593f4: 0x8c262cb4  lw          $a2, 0x2CB4($at)
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11444)));
    // 0x1593f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1593fc: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x1593FCu;
    SET_GPR_U32(ctx, 31, 0x159404u);
    ctx->pc = 0x159400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1593FCu;
            // 0x159400: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159404u; }
        if (ctx->pc != 0x159404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159404u; }
        if (ctx->pc != 0x159404u) { return; }
    }
    ctx->pc = 0x159404u;
    // 0x159404: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159408: 0xc056574  jal         func_1595D0
    ctx->pc = 0x159408u;
    SET_GPR_U32(ctx, 31, 0x159410u);
    ctx->pc = 0x15940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159408u;
            // 0x15940c: 0x8c242cb4  lw          $a0, 0x2CB4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159410u; }
        if (ctx->pc != 0x159410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159410u; }
        if (ctx->pc != 0x159410u) { return; }
    }
    ctx->pc = 0x159410u;
    // 0x159410: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159410u;
    {
        const bool branch_taken_0x159410 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159410u;
            // 0x159414: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159410) {
            ctx->pc = 0x159424u;
            goto label_159424;
        }
    }
    ctx->pc = 0x159418u;
    // 0x159418: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159418u;
    {
        const bool branch_taken_0x159418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159418) {
            ctx->pc = 0x159424u;
            goto label_159424;
        }
    }
    ctx->pc = 0x159420u;
    // 0x159420: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x159420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_159424:
    // 0x159424: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x159424u;
    {
        const bool branch_taken_0x159424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159424) {
            ctx->pc = 0x159470u;
            goto label_159470;
        }
    }
    ctx->pc = 0x15942Cu;
    // 0x15942c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15942Cu;
    {
        const bool branch_taken_0x15942c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15942Cu;
            // 0x159430: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15942c) {
            ctx->pc = 0x15943Cu;
            goto label_15943c;
        }
    }
    ctx->pc = 0x159434u;
    // 0x159434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159438: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x159438u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15943c:
    // 0x15943c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159440: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159444: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159444u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x159448: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x159448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15944c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x159450: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x159450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159454: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x159454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159458: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x159458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15945c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15945cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159460: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x159460u;
    SET_GPR_U32(ctx, 31, 0x159468u);
    ctx->pc = 0x159464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159460u;
            // 0x159464: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159468u; }
        if (ctx->pc != 0x159468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159468u; }
        if (ctx->pc != 0x159468u) { return; }
    }
    ctx->pc = 0x159468u;
    // 0x159468: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159468u;
    {
        const bool branch_taken_0x159468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159468) {
            ctx->pc = 0x1594B0u;
            goto label_1594b0;
        }
    }
    ctx->pc = 0x159470u;
label_159470:
    // 0x159470: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159470u;
    {
        const bool branch_taken_0x159470 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159470u;
            // 0x159474: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159470) {
            ctx->pc = 0x159480u;
            goto label_159480;
        }
    }
    ctx->pc = 0x159478u;
    // 0x159478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15947c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15947cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_159480:
    // 0x159480: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159484: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x159484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159488: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x159488u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x15948c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x159490: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x159490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x159494: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x159494u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159498: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x159498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15949c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x15949cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1594a0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1594a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594a4: 0xc060940  jal         func_182500
    ctx->pc = 0x1594A4u;
    SET_GPR_U32(ctx, 31, 0x1594ACu);
    ctx->pc = 0x1594A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1594A4u;
            // 0x1594a8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594ACu; }
        if (ctx->pc != 0x1594ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594ACu; }
        if (ctx->pc != 0x1594ACu) { return; }
    }
    ctx->pc = 0x1594ACu;
    // 0x1594ac: 0x0  nop
    ctx->pc = 0x1594acu;
    // NOP
label_1594b0:
    // 0x1594b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1594b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1594b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1594B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594B4u;
            // 0x1594b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158D64u: goto label_158d64;
            case 0x158D7Cu: goto label_158d7c;
            case 0x158DB0u: goto label_158db0;
            case 0x158DC0u: goto label_158dc0;
            case 0x158DF0u: goto label_158df0;
            case 0x158E54u: goto label_158e54;
            case 0x158E6Cu: goto label_158e6c;
            case 0x158EA0u: goto label_158ea0;
            case 0x158EB0u: goto label_158eb0;
            case 0x158EE0u: goto label_158ee0;
            case 0x158F44u: goto label_158f44;
            case 0x158F5Cu: goto label_158f5c;
            case 0x158F90u: goto label_158f90;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FD0u: goto label_158fd0;
            case 0x159034u: goto label_159034;
            case 0x15904Cu: goto label_15904c;
            case 0x159080u: goto label_159080;
            case 0x159090u: goto label_159090;
            case 0x1590C0u: goto label_1590c0;
            case 0x159150u: goto label_159150;
            case 0x159168u: goto label_159168;
            case 0x1591A0u: goto label_1591a0;
            case 0x1591B0u: goto label_1591b0;
            case 0x1591E0u: goto label_1591e0;
            case 0x159244u: goto label_159244;
            case 0x15925Cu: goto label_15925c;
            case 0x159290u: goto label_159290;
            case 0x1592A0u: goto label_1592a0;
            case 0x1592D0u: goto label_1592d0;
            case 0x159334u: goto label_159334;
            case 0x15934Cu: goto label_15934c;
            case 0x159380u: goto label_159380;
            case 0x159390u: goto label_159390;
            case 0x1593C0u: goto label_1593c0;
            case 0x159424u: goto label_159424;
            case 0x15943Cu: goto label_15943c;
            case 0x159470u: goto label_159470;
            case 0x159480u: goto label_159480;
            case 0x1594B0u: goto label_1594b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1594BCu;
}
