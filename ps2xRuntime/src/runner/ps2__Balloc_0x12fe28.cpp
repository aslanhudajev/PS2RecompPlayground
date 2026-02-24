#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Balloc
// Address: 0x12fe28 - 0x12fed0
void ps2__Balloc_0x12fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Balloc_0x12fe28");
#endif

    ctx->pc = 0x12fe28u;

    // 0x12fe28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fe2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12fe30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fe34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12fe38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fe38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe3c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x12fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x12fe40: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FE40u;
    {
        const bool branch_taken_0x12fe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE40u;
            // 0x12fe44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe40) {
            ctx->pc = 0x12FE60u;
            goto label_12fe60;
        }
    }
    ctx->pc = 0x12FE48u;
    // 0x12fe48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12fe4c: 0xc04c3ca  jal         func_130F28
    ctx->pc = 0x12FE4Cu;
    SET_GPR_U32(ctx, 31, 0x12FE54u);
    ctx->pc = 0x12FE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE4Cu;
            // 0x12fe50: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130F28u;
    if (runtime->hasFunction(0x130F28u)) {
        auto targetFn = runtime->lookupFunction(0x130F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE54u; }
        if (ctx->pc != 0x12FE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x130f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE54u; }
        if (ctx->pc != 0x12FE54u) { return; }
    }
    ctx->pc = 0x12FE54u;
    // 0x12fe54: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12FE54u;
    {
        const bool branch_taken_0x12fe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE54u;
            // 0x12fe58: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe54) {
            ctx->pc = 0x12FEA4u;
            goto label_12fea4;
        }
    }
    ctx->pc = 0x12FE5Cu;
    // 0x12fe5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12fe5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12fe60:
    // 0x12fe60: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x12fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12fe64: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fe68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12fe6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FE6Cu;
    {
        const bool branch_taken_0x12fe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE6Cu;
            // 0x12fe70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe6c) {
            ctx->pc = 0x12FE80u;
            goto label_12fe80;
        }
    }
    ctx->pc = 0x12FE74u;
    // 0x12fe74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fe78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE78u;
            // 0x12fe7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FEB0u;
            goto label_12feb0;
        }
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe84: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x12fe84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x12fe88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fe8c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x12fe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12fe90: 0xc04c3ca  jal         func_130F28
    ctx->pc = 0x12FE90u;
    SET_GPR_U32(ctx, 31, 0x12FE98u);
    ctx->pc = 0x12FE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE90u;
            // 0x12fe94: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130F28u;
    if (runtime->hasFunction(0x130F28u)) {
        auto targetFn = runtime->lookupFunction(0x130F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE98u; }
        if (ctx->pc != 0x12FE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x130f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE98u; }
        if (ctx->pc != 0x12FE98u) { return; }
    }
    ctx->pc = 0x12FE98u;
    // 0x12fe98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12fe98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe9c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE9Cu;
    {
        const bool branch_taken_0x12fe9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fe9c) {
            ctx->pc = 0x12FEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE9Cu;
            // 0x12fea0: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FEACu;
            goto label_12feac;
        }
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12FEA4u;
    {
        const bool branch_taken_0x12fea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEA4u;
            // 0x12fea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fea4) {
            ctx->pc = 0x12FEBCu;
            goto label_12febc;
        }
    }
    ctx->pc = 0x12FEACu;
label_12feac:
    // 0x12feac: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x12feacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_12feb0:
    // 0x12feb0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x12feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x12feb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12feb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feb8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_12febc:
    // 0x12febc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12febcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fec0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12fec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fec8: 0x3e00008  jr          $ra
    ctx->pc = 0x12FEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEC8u;
            // 0x12fecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FE60u: goto label_12fe60;
            case 0x12FE80u: goto label_12fe80;
            case 0x12FEA4u: goto label_12fea4;
            case 0x12FEACu: goto label_12feac;
            case 0x12FEB0u: goto label_12feb0;
            case 0x12FEBCu: goto label_12febc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FED0u;
}
