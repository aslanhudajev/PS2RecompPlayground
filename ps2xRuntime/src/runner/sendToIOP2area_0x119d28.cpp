#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendToIOP2area
// Address: 0x119d28 - 0x119e84
void sendToIOP2area_0x119d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119d28u;

    // 0x119d28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x119d2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119d30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119d34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x119d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119d3c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x119d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d40: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x119d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x119d44: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x119d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d48: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x119d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x119d4c: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x119d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x119d50: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x119d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119d54: 0x211b821  addu        $s7, $s0, $s1
    ctx->pc = 0x119d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x119d58: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119d5c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x119d5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119d64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x119d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x119d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x119d6c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x119d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119d74: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x119d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x119d78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x119D78u;
    {
        const bool branch_taken_0x119d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D78u;
            // 0x119d7c: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d78) {
            ctx->pc = 0x119DA8u;
            goto label_119da8;
        }
    }
    ctx->pc = 0x119D80u;
    // 0x119d80: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x119d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x119d84: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x119d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x119d88: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x119D88u;
    {
        const bool branch_taken_0x119d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119d88) {
            ctx->pc = 0x119D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119D88u;
            // 0x119d8c: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119DA4u;
            goto label_119da4;
        }
    }
    ctx->pc = 0x119D90u;
    // 0x119d90: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x119d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119d94: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x119d94u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119d98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x119d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119D9Cu;
    {
        const bool branch_taken_0x119d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D9Cu;
            // 0x119da0: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d9c) {
            ctx->pc = 0x119DA8u;
            goto label_119da8;
        }
    }
    ctx->pc = 0x119DA4u;
label_119da4:
    // 0x119da4: 0x211b821  addu        $s7, $s0, $s1
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_119da8:
    // 0x119da8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x119da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x119dac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x119DACu;
    {
        const bool branch_taken_0x119dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DACu;
            // 0x119db0: 0x2709023  subu        $s2, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dac) {
            ctx->pc = 0x119DF0u;
            goto label_119df0;
        }
    }
    ctx->pc = 0x119DB4u;
    // 0x119db4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119db8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x119db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dbc: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119DBCu;
    SET_GPR_U32(ctx, 31, 0x119DC4u);
    ctx->pc = 0x119DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DBCu;
            // 0x119dc0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DC4u; }
        if (ctx->pc != 0x119DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DC4u; }
        if (ctx->pc != 0x119DC4u) { return; }
    }
    ctx->pc = 0x119DC4u;
    // 0x119dc4: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x119dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x119dc8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x119dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dcc: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119DCCu;
    SET_GPR_U32(ctx, 31, 0x119DD4u);
    ctx->pc = 0x119DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DCCu;
            // 0x119dd0: 0x2133023  subu        $a2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DD4u; }
        if (ctx->pc != 0x119DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DD4u; }
        if (ctx->pc != 0x119DD4u) { return; }
    }
    ctx->pc = 0x119DD4u;
    // 0x119dd4: 0x3d02021  addu        $a0, $fp, $s0
    ctx->pc = 0x119dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x119dd8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x119dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ddc: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x119ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x119de0: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119DE0u;
    SET_GPR_U32(ctx, 31, 0x119DE8u);
    ctx->pc = 0x119DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DE0u;
            // 0x119de4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DE8u; }
        if (ctx->pc != 0x119DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DE8u; }
        if (ctx->pc != 0x119DE8u) { return; }
    }
    ctx->pc = 0x119DE8u;
    // 0x119de8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x119DE8u;
    {
        const bool branch_taken_0x119de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DE8u;
            // 0x119dec: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119de8) {
            ctx->pc = 0x119E54u;
            goto label_119e54;
        }
    }
    ctx->pc = 0x119DF0u;
label_119df0:
    // 0x119df0: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x119df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x119df4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x119DF4u;
    {
        const bool branch_taken_0x119df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DF4u;
            // 0x119df8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119df4) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119DFCu;
    // 0x119dfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e00: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119E00u;
    SET_GPR_U32(ctx, 31, 0x119E08u);
    ctx->pc = 0x119E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E00u;
            // 0x119e04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E08u; }
        if (ctx->pc != 0x119E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E08u; }
        if (ctx->pc != 0x119E08u) { return; }
    }
    ctx->pc = 0x119E08u;
    // 0x119e08: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x119e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x119e0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e10: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119E10u;
    SET_GPR_U32(ctx, 31, 0x119E18u);
    ctx->pc = 0x119E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E10u;
            // 0x119e14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E18u; }
        if (ctx->pc != 0x119E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E18u; }
        if (ctx->pc != 0x119E18u) { return; }
    }
    ctx->pc = 0x119E18u;
    // 0x119e18: 0x2d32821  addu        $a1, $s6, $s3
    ctx->pc = 0x119e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x119e1c: 0x2323023  subu        $a2, $s1, $s2
    ctx->pc = 0x119e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x119e20: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x119e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x119e24: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119E24u;
    SET_GPR_U32(ctx, 31, 0x119E2Cu);
    ctx->pc = 0x119E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E24u;
            // 0x119e28: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E2Cu; }
        if (ctx->pc != 0x119E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E2Cu; }
        if (ctx->pc != 0x119E2Cu) { return; }
    }
    ctx->pc = 0x119E2Cu;
    // 0x119e2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119E2Cu;
    {
        const bool branch_taken_0x119e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E2Cu;
            // 0x119e30: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e2c) {
            ctx->pc = 0x119E54u;
            goto label_119e54;
        }
    }
    ctx->pc = 0x119E34u;
label_119e34:
    // 0x119e34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e38: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119E38u;
    SET_GPR_U32(ctx, 31, 0x119E40u);
    ctx->pc = 0x119E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E38u;
            // 0x119e3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E40u; }
        if (ctx->pc != 0x119E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E40u; }
        if (ctx->pc != 0x119E40u) { return; }
    }
    ctx->pc = 0x119E40u;
    // 0x119e40: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x119e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x119e44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x119e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e48: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119E48u;
    SET_GPR_U32(ctx, 31, 0x119E50u);
    ctx->pc = 0x119E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E48u;
            // 0x119e4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E50u; }
        if (ctx->pc != 0x119E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E50u; }
        if (ctx->pc != 0x119E50u) { return; }
    }
    ctx->pc = 0x119E50u;
    // 0x119e50: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x119e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_119e54:
    // 0x119e54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x119e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119e58: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x119e58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119e5c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119e60: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x119e60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119e64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119e64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119e68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119e6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119e70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119e74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x119E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E7Cu;
            // 0x119e80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119DA4u: goto label_119da4;
            case 0x119DA8u: goto label_119da8;
            case 0x119DF0u: goto label_119df0;
            case 0x119E34u: goto label_119e34;
            case 0x119E54u: goto label_119e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119E84u;
}
