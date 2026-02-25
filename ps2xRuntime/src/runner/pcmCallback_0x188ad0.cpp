#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: pcmCallback
// Address: 0x188ad0 - 0x188ba0
void pcmCallback_0x188ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("pcmCallback_0x188ad0");
#endif

    ctx->pc = 0x188ad0u;

    // 0x188ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x188ad4: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188ad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x188ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x188adc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x188adcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x188ae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188ae4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188af0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x188af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x188af4: 0x8c240008  lw          $a0, 0x8($at)
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x188af8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x188afc: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x188b00: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x188b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x188b04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188B04u;
    {
        const bool branch_taken_0x188b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B04u;
            // 0x188b08: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b04) {
            ctx->pc = 0x188B10u;
            goto label_188b10;
        }
    }
    ctx->pc = 0x188B0Cu;
    // 0x188b0c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x188b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_188b10:
    // 0x188b10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x188b14: 0x709023  subu        $s2, $v1, $s0
    ctx->pc = 0x188b14u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x188b18: 0x2453fffc  addiu       $s3, $v0, -0x4
    ctx->pc = 0x188b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x188b1c: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x188b1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x188b20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x188B20u;
    {
        const bool branch_taken_0x188b20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b20) {
            ctx->pc = 0x188B2Cu;
            goto label_188b2c;
        }
    }
    ctx->pc = 0x188B28u;
    // 0x188b28: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x188b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_188b2c:
    // 0x188b2c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188b30: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x188b34: 0x2484fda0  addiu       $a0, $a0, -0x260
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
    // 0x188b38: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x188b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x188b3c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x188b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x188b40: 0xc061d40  jal         func_187500
    ctx->pc = 0x188B40u;
    SET_GPR_U32(ctx, 31, 0x188B48u);
    ctx->pc = 0x188B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B40u;
            // 0x188b44: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187500u;
    if (runtime->hasFunction(0x187500u)) {
        auto targetFn = runtime->lookupFunction(0x187500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B48u; }
        if (ctx->pc != 0x188B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecBeginPut_0x187500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B48u; }
        if (ctx->pc != 0x188B48u) { return; }
    }
    ctx->pc = 0x188B48u;
    // 0x188b48: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x188b4c: 0x2725823  subu        $t3, $s3, $s2
    ctx->pc = 0x188b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x188b50: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x188b54: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x188b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b58: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x188b5c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x188b5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b60: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188b64: 0xc062264  jal         func_188990
    ctx->pc = 0x188B64u;
    SET_GPR_U32(ctx, 31, 0x188B6Cu);
    ctx->pc = 0x188B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B64u;
            // 0x188b68: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188990u;
    if (runtime->hasFunction(0x188990u)) {
        auto targetFn = runtime->lookupFunction(0x188990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B6Cu; }
        if (ctx->pc != 0x188B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x188990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B6Cu; }
        if (ctx->pc != 0x188B6Cu) { return; }
    }
    ctx->pc = 0x188B6Cu;
    // 0x188b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b70: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188b74: 0x2484fda0  addiu       $a0, $a0, -0x260
    ctx->pc = 0x188b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
    // 0x188b78: 0xc061cf4  jal         func_1873D0
    ctx->pc = 0x188B78u;
    SET_GPR_U32(ctx, 31, 0x188B80u);
    ctx->pc = 0x188B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B78u;
            // 0x188b7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1873D0u;
    if (runtime->hasFunction(0x1873D0u)) {
        auto targetFn = runtime->lookupFunction(0x1873D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B80u; }
        if (ctx->pc != 0x188B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecEndPut_0x1873d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B80u; }
        if (ctx->pc != 0x188B80u) { return; }
    }
    ctx->pc = 0x188B80u;
    // 0x188b80: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x188b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188b84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x188b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188b98: 0x3e00008  jr          $ra
    ctx->pc = 0x188B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B98u;
            // 0x188b9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188B10u: goto label_188b10;
            case 0x188B2Cu: goto label_188b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188BA0u;
}
