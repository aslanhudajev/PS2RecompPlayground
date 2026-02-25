#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufAddDMA
// Address: 0x189c30 - 0x189e6c
void viBufAddDMA_0x189c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufAddDMA_0x189c30");
#endif

    ctx->pc = 0x189c30u;

    // 0x189c30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189c34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x189c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x189c38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x189c3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189c40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x189c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189c48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189c54: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x189c58: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189C58u;
    SET_GPR_U32(ctx, 31, 0x189C60u);
    ctx->pc = 0x189C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C58u;
            // 0x189c5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C60u; }
        if (ctx->pc != 0x189C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C60u; }
        if (ctx->pc != 0x189C60u) { return; }
    }
    ctx->pc = 0x189C60u;
    // 0x189c60: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x189c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x189c64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x189C64u;
    {
        const bool branch_taken_0x189c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C64u;
            // 0x189c68: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c64) {
            ctx->pc = 0x189C88u;
            goto label_189c88;
        }
    }
    ctx->pc = 0x189C6Cu;
    // 0x189c6c: 0xc062048  jal         func_188120
    ctx->pc = 0x189C6Cu;
    SET_GPR_U32(ctx, 31, 0x189C74u);
    ctx->pc = 0x189C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C6Cu;
            // 0x189c70: 0x248426c0  addiu       $a0, $a0, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188120u;
    if (runtime->hasFunction(0x188120u)) {
        auto targetFn = runtime->lookupFunction(0x188120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C74u; }
        if (ctx->pc != 0x189C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x188120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C74u; }
        if (ctx->pc != 0x189C74u) { return; }
    }
    ctx->pc = 0x189C74u;
    // 0x189c74: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189C74u;
    SET_GPR_U32(ctx, 31, 0x189C7Cu);
    ctx->pc = 0x189C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C74u;
            // 0x189c78: 0x8ea40040  lw          $a0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C7Cu; }
        if (ctx->pc != 0x189C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C7Cu; }
        if (ctx->pc != 0x189C7Cu) { return; }
    }
    ctx->pc = 0x189C7Cu;
    // 0x189c7c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x189C7Cu;
    {
        const bool branch_taken_0x189c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C7Cu;
            // 0x189c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c7c) {
            ctx->pc = 0x189E48u;
            goto label_189e48;
        }
    }
    ctx->pc = 0x189C84u;
    // 0x189c84: 0x0  nop
    ctx->pc = 0x189c84u;
    // NOP
label_189c88:
    // 0x189c88: 0xc062880  jal         func_18A200
    ctx->pc = 0x189C88u;
    SET_GPR_U32(ctx, 31, 0x189C90u);
    ctx->pc = 0x189C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C88u;
            // 0x189c8c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A200u;
    if (runtime->hasFunction(0x18A200u)) {
        auto targetFn = runtime->lookupFunction(0x18A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C90u; }
        if (ctx->pc != 0x189C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x18a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C90u; }
        if (ctx->pc != 0x189C90u) { return; }
    }
    ctx->pc = 0x189C90u;
    // 0x189c90: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189c94: 0x8c33b400  lw          $s3, -0x4C00($at)
    ctx->pc = 0x189c94u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947840))); // MMIO: 0x1000b400
    // 0x189c98: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189c9c: 0x8c25b410  lw          $a1, -0x4BF0($at)
    ctx->pc = 0x189c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947856))); // MMIO: 0x1000b410
    // 0x189ca0: 0xc0628b8  jal         func_18A2E0
    ctx->pc = 0x189CA0u;
    SET_GPR_U32(ctx, 31, 0x189CA8u);
    ctx->pc = 0x189CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189CA0u;
            // 0x189ca4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2E0u;
    if (runtime->hasFunction(0x18A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CA8u; }
        if (ctx->pc != 0x189CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x18a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CA8u; }
        if (ctx->pc != 0x189CA8u) { return; }
    }
    ctx->pc = 0x189CA8u;
    // 0x189ca8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x189ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x189cac: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x189cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x189cb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189cb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x189cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189cb8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x189cb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189cbc: 0x0  nop
    ctx->pc = 0x189cbcu;
    // NOP
    // 0x189cc0: 0x0  nop
    ctx->pc = 0x189cc0u;
    // NOP
    // 0x189cc4: 0x2810  mfhi        $a1
    ctx->pc = 0x189cc4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x189cc8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x189cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x189ccc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x189cccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189cd0: 0x0  nop
    ctx->pc = 0x189cd0u;
    // NOP
    // 0x189cd4: 0x0  nop
    ctx->pc = 0x189cd4u;
    // NOP
    // 0x189cd8: 0x1010  mfhi        $v0
    ctx->pc = 0x189cd8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x189cdc: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x189cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x189ce0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x189ce4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x189ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189ce8: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x189ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x189cec: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x189cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x189cf0: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x189cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x189cf4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x189cf8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x189cfc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x189cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x189d00: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x189d00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189d04: 0x0  nop
    ctx->pc = 0x189d04u;
    // NOP
    // 0x189d08: 0x0  nop
    ctx->pc = 0x189d08u;
    // NOP
    // 0x189d0c: 0x8810  mfhi        $s1
    ctx->pc = 0x189d0cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x189d10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189D10u;
    {
        const bool branch_taken_0x189d10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x189D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D10u;
            // 0x189d14: 0x282c3  sra         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d10) {
            ctx->pc = 0x189D20u;
            goto label_189d20;
        }
    }
    ctx->pc = 0x189D18u;
    // 0x189d18: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x189d1c: 0x282c3  sra         $s0, $v0, 11
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
label_189d20:
    // 0x189d20: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x189d24: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189D24u;
    {
        const bool branch_taken_0x189d24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x189D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D24u;
            // 0x189d28: 0x306207ff  andi        $v0, $v1, 0x7FF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d24) {
            ctx->pc = 0x189D38u;
            goto label_189d38;
        }
    }
    ctx->pc = 0x189D2Cu;
    // 0x189d2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189D2Cu;
    {
        const bool branch_taken_0x189d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d2c) {
            ctx->pc = 0x189D38u;
            goto label_189d38;
        }
    }
    ctx->pc = 0x189D34u;
    // 0x189d34: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x189d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
label_189d38:
    // 0x189d38: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x189D38u;
    {
        const bool branch_taken_0x189d38 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x189D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D38u;
            // 0x189d3c: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d38) {
            ctx->pc = 0x189D90u;
            goto label_189d90;
        }
    }
    ctx->pc = 0x189D40u;
    // 0x189d40: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x189d44: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189d48: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x189d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x189d4c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x189d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x189d50: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x189d54: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x189d58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x189d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x189d5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x189d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x189d60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x189d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x189d64: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x189d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x189d68: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x189d68u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189d6c: 0x0  nop
    ctx->pc = 0x189d6cu;
    // NOP
    // 0x189d70: 0x0  nop
    ctx->pc = 0x189d70u;
    // NOP
    // 0x189d74: 0x1810  mfhi        $v1
    ctx->pc = 0x189d74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x189d78: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x189d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x189d7c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x189d80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189d84: 0xc062874  jal         func_18A1D0
    ctx->pc = 0x189D84u;
    SET_GPR_U32(ctx, 31, 0x189D8Cu);
    ctx->pc = 0x189D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D84u;
            // 0x189d88: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (runtime->hasFunction(0x18A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D8Cu; }
        if (ctx->pc != 0x189D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x18a1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D8Cu; }
        if (ctx->pc != 0x189D8Cu) { return; }
    }
    ctx->pc = 0x189D8Cu;
    // 0x189d8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x189d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189d90:
    // 0x189d90: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x189d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x189d94: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x189D94u;
    {
        const bool branch_taken_0x189d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D94u;
            // 0x189d98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d94) {
            ctx->pc = 0x189E00u;
            goto label_189e00;
        }
    }
    ctx->pc = 0x189D9Cu;
    // 0x189d9c: 0x0  nop
    ctx->pc = 0x189d9cu;
    // NOP
label_189da0:
    // 0x189da0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x189da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x189da4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x189da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x189da8: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x189da8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x189dac: 0x112ac0  sll         $a1, $s1, 11
    ctx->pc = 0x189dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x189db0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x189db4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x189db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x189db8: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189DB8u;
    {
        const bool branch_taken_0x189db8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x189DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189DB8u;
            // 0x189dbc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189db8) {
            ctx->pc = 0x189DC8u;
            goto label_189dc8;
        }
    }
    ctx->pc = 0x189DC0u;
    // 0x189dc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189DC0u;
    {
        const bool branch_taken_0x189dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189DC0u;
            // 0x189dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189dc0) {
            ctx->pc = 0x189DCCu;
            goto label_189dcc;
        }
    }
    ctx->pc = 0x189DC8u;
label_189dc8:
    // 0x189dc8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x189dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_189dcc:
    // 0x189dcc: 0xc062874  jal         func_18A1D0
    ctx->pc = 0x189DCCu;
    SET_GPR_U32(ctx, 31, 0x189DD4u);
    ctx->pc = 0x189DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DCCu;
            // 0x189dd0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (runtime->hasFunction(0x18A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DD4u; }
        if (ctx->pc != 0x189DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x18a1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DD4u; }
        if (ctx->pc != 0x189DD4u) { return; }
    }
    ctx->pc = 0x189DD4u;
    // 0x189dd4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x189dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x189dd8: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x189dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x189ddc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x189ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x189de0: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x189de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x189de4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x189de4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189de8: 0x0  nop
    ctx->pc = 0x189de8u;
    // NOP
    // 0x189dec: 0x0  nop
    ctx->pc = 0x189decu;
    // NOP
    // 0x189df0: 0x8810  mfhi        $s1
    ctx->pc = 0x189df0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x189df4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x189DF4u;
    {
        const bool branch_taken_0x189df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189df4) {
            ctx->pc = 0x189DA0u;
            goto label_189da0;
        }
    }
    ctx->pc = 0x189DFCu;
    // 0x189dfc: 0x0  nop
    ctx->pc = 0x189dfcu;
    // NOP
label_189e00:
    // 0x189e00: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x189e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x189e04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189e08: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x189e08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x189e0c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x189e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x189e10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189E10u;
    {
        const bool branch_taken_0x189e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e10) {
            ctx->pc = 0x189E38u;
            goto label_189e38;
        }
    }
    ctx->pc = 0x189E18u;
    // 0x189e18: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x189E18u;
    {
        const bool branch_taken_0x189e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E18u;
            // 0x189e1c: 0x13193c  dsll32      $v1, $s3, 4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e18) {
            ctx->pc = 0x189E30u;
            goto label_189e30;
        }
    }
    ctx->pc = 0x189E20u;
    // 0x189e20: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x189e24: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x189e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x189e28: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x189e28u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x189e2c: 0x0  nop
    ctx->pc = 0x189e2cu;
    // NOP
label_189e30:
    // 0x189e30: 0xc062880  jal         func_18A200
    ctx->pc = 0x189E30u;
    SET_GPR_U32(ctx, 31, 0x189E38u);
    ctx->pc = 0x189E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E30u;
            // 0x189e34: 0x36640100  ori         $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A200u;
    if (runtime->hasFunction(0x18A200u)) {
        auto targetFn = runtime->lookupFunction(0x18A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E38u; }
        if (ctx->pc != 0x189E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x18a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E38u; }
        if (ctx->pc != 0x189E38u) { return; }
    }
    ctx->pc = 0x189E38u;
label_189e38:
    // 0x189e38: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189E38u;
    SET_GPR_U32(ctx, 31, 0x189E40u);
    ctx->pc = 0x189E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E38u;
            // 0x189e3c: 0x8ea40040  lw          $a0, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E40u; }
        if (ctx->pc != 0x189E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E40u; }
        if (ctx->pc != 0x189E40u) { return; }
    }
    ctx->pc = 0x189E40u;
    // 0x189e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e44: 0x0  nop
    ctx->pc = 0x189e44u;
    // NOP
label_189e48:
    // 0x189e48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x189e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189e4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x189e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189e50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189e54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189e64: 0x3e00008  jr          $ra
    ctx->pc = 0x189E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E64u;
            // 0x189e68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189C88u: goto label_189c88;
            case 0x189D20u: goto label_189d20;
            case 0x189D38u: goto label_189d38;
            case 0x189D90u: goto label_189d90;
            case 0x189DA0u: goto label_189da0;
            case 0x189DC8u: goto label_189dc8;
            case 0x189DCCu: goto label_189dcc;
            case 0x189E00u: goto label_189e00;
            case 0x189E30u: goto label_189e30;
            case 0x189E38u: goto label_189e38;
            case 0x189E48u: goto label_189e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189E6Cu;
}
