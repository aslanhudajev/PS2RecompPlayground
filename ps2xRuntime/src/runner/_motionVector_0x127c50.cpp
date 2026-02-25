#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _motionVector
// Address: 0x127c50 - 0x127d9c
void _motionVector_0x127c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_motionVector_0x127c50");
#endif

    ctx->pc = 0x127c50u;

    // 0x127c50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x127c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x127c54: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x127c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x127c58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127c5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x127c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c60: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x127c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x127c64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x127c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c68: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x127c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x127c6c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x127c6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c70: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x127c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x127c74: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x127c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x127c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x127c7c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x127c7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x127c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x127c84: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x127c84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127c8c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x127c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127c94: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x127c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x127c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x127c9c: 0xc049fca  jal         func_127F28
    ctx->pc = 0x127C9Cu;
    SET_GPR_U32(ctx, 31, 0x127CA4u);
    ctx->pc = 0x127CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127C9Cu;
            // 0x127ca0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (runtime->hasFunction(0x127F28u)) {
        auto targetFn = runtime->lookupFunction(0x127F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CA4u; }
        if (ctx->pc != 0x127CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x127f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CA4u; }
        if (ctx->pc != 0x127CA4u) { return; }
    }
    ctx->pc = 0x127CA4u;
    // 0x127ca4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x127CA4u;
    {
        const bool branch_taken_0x127ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CA4u;
            // 0x127ca8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ca4) {
            ctx->pc = 0x127CC4u;
            goto label_127cc4;
        }
    }
    ctx->pc = 0x127CACu;
    // 0x127cac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127CACu;
    {
        const bool branch_taken_0x127cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CACu;
            // 0x127cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cac) {
            ctx->pc = 0x127CC4u;
            goto label_127cc4;
        }
    }
    ctx->pc = 0x127CB4u;
    // 0x127cb4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127CB4u;
    SET_GPR_U32(ctx, 31, 0x127CBCu);
    ctx->pc = 0x127CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CB4u;
            // 0x127cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CBCu; }
        if (ctx->pc != 0x127CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CBCu; }
        if (ctx->pc != 0x127CBCu) { return; }
    }
    ctx->pc = 0x127CBCu;
    // 0x127cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127CBCu;
    {
        const bool branch_taken_0x127cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CBCu;
            // 0x127cc0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cbc) {
            ctx->pc = 0x127CC8u;
            goto label_127cc8;
        }
    }
    ctx->pc = 0x127CC4u;
label_127cc4:
    // 0x127cc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127cc8:
    // 0x127cc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cd4: 0xc049e8a  jal         func_127A28
    ctx->pc = 0x127CD4u;
    SET_GPR_U32(ctx, 31, 0x127CDCu);
    ctx->pc = 0x127CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CD4u;
            // 0x127cd8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A28u;
    if (runtime->hasFunction(0x127A28u)) {
        auto targetFn = runtime->lookupFunction(0x127A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CDCu; }
        if (ctx->pc != 0x127CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x127a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CDCu; }
        if (ctx->pc != 0x127CDCu) { return; }
    }
    ctx->pc = 0x127CDCu;
    // 0x127cdc: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x127CDCu;
    {
        const bool branch_taken_0x127cdc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CDCu;
            // 0x127ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cdc) {
            ctx->pc = 0x127CF4u;
            goto label_127cf4;
        }
    }
    ctx->pc = 0x127CE4u;
    // 0x127ce4: 0xc049b70  jal         func_126DC0
    ctx->pc = 0x127CE4u;
    SET_GPR_U32(ctx, 31, 0x127CECu);
    ctx->pc = 0x127CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CE4u;
            // 0x127ce8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126DC0u;
    if (runtime->hasFunction(0x126DC0u)) {
        auto targetFn = runtime->lookupFunction(0x126DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CECu; }
        if (ctx->pc != 0x127CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x126dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CECu; }
        if (ctx->pc != 0x127CECu) { return; }
    }
    ctx->pc = 0x127CECu;
    // 0x127cec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x127cecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x127cf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_127cf4:
    // 0x127cf4: 0xc049fca  jal         func_127F28
    ctx->pc = 0x127CF4u;
    SET_GPR_U32(ctx, 31, 0x127CFCu);
    ctx->pc = 0x127CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CF4u;
            // 0x127cf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (runtime->hasFunction(0x127F28u)) {
        auto targetFn = runtime->lookupFunction(0x127F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CFCu; }
        if (ctx->pc != 0x127CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x127f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CFCu; }
        if (ctx->pc != 0x127CFCu) { return; }
    }
    ctx->pc = 0x127CFCu;
    // 0x127cfc: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x127CFCu;
    {
        const bool branch_taken_0x127cfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CFCu;
            // 0x127d00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cfc) {
            ctx->pc = 0x127D1Cu;
            goto label_127d1c;
        }
    }
    ctx->pc = 0x127D04u;
    // 0x127d04: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127D04u;
    {
        const bool branch_taken_0x127d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D04u;
            // 0x127d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d04) {
            ctx->pc = 0x127D1Cu;
            goto label_127d1c;
        }
    }
    ctx->pc = 0x127D0Cu;
    // 0x127d0c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127D0Cu;
    SET_GPR_U32(ctx, 31, 0x127D14u);
    ctx->pc = 0x127D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127D0Cu;
            // 0x127d10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D14u; }
        if (ctx->pc != 0x127D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D14u; }
        if (ctx->pc != 0x127D14u) { return; }
    }
    ctx->pc = 0x127D14u;
    // 0x127d14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127D14u;
    {
        const bool branch_taken_0x127d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D14u;
            // 0x127d18: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d14) {
            ctx->pc = 0x127D20u;
            goto label_127d20;
        }
    }
    ctx->pc = 0x127D1Cu;
label_127d1c:
    // 0x127d1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127d20:
    // 0x127d20: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x127D20u;
    {
        const bool branch_taken_0x127d20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D20u;
            // 0x127d24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d20) {
            ctx->pc = 0x127D34u;
            goto label_127d34;
        }
    }
    ctx->pc = 0x127D28u;
    // 0x127d28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x127d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x127d2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x127d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x127d30: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x127d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_127d34:
    // 0x127d34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d38: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x127d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d3c: 0xc049e8a  jal         func_127A28
    ctx->pc = 0x127D3Cu;
    SET_GPR_U32(ctx, 31, 0x127D44u);
    ctx->pc = 0x127D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127D3Cu;
            // 0x127d40: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A28u;
    if (runtime->hasFunction(0x127A28u)) {
        auto targetFn = runtime->lookupFunction(0x127A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D44u; }
        if (ctx->pc != 0x127D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x127a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D44u; }
        if (ctx->pc != 0x127D44u) { return; }
    }
    ctx->pc = 0x127D44u;
    // 0x127d44: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x127D44u;
    {
        const bool branch_taken_0x127d44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d44) {
            ctx->pc = 0x127D58u;
            goto label_127d58;
        }
    }
    ctx->pc = 0x127D4Cu;
    // 0x127d4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x127d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x127d50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x127d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x127d54: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x127d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_127d58:
    // 0x127d58: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x127D58u;
    {
        const bool branch_taken_0x127d58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D58u;
            // 0x127d5c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d58) {
            ctx->pc = 0x127D70u;
            goto label_127d70;
        }
    }
    ctx->pc = 0x127D60u;
    // 0x127d60: 0xc049b70  jal         func_126DC0
    ctx->pc = 0x127D60u;
    SET_GPR_U32(ctx, 31, 0x127D68u);
    ctx->pc = 0x127D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127D60u;
            // 0x127d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126DC0u;
    if (runtime->hasFunction(0x126DC0u)) {
        auto targetFn = runtime->lookupFunction(0x126DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D68u; }
        if (ctx->pc != 0x127D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x126dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D68u; }
        if (ctx->pc != 0x127D68u) { return; }
    }
    ctx->pc = 0x127D68u;
    // 0x127d68: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x127d68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x127d6c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x127d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_127d70:
    // 0x127d70: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x127d70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127d74: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x127d74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127d78: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x127d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127d7c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x127d7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127d80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x127d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127d84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127d88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127d8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127d94: 0x3e00008  jr          $ra
    ctx->pc = 0x127D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D94u;
            // 0x127d98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127CC4u: goto label_127cc4;
            case 0x127CC8u: goto label_127cc8;
            case 0x127CF4u: goto label_127cf4;
            case 0x127D1Cu: goto label_127d1c;
            case 0x127D20u: goto label_127d20;
            case 0x127D34u: goto label_127d34;
            case 0x127D58u: goto label_127d58;
            case 0x127D70u: goto label_127d70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127D9Cu;
}
