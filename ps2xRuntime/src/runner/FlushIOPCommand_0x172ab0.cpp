#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FlushIOPCommand
// Address: 0x172ab0 - 0x172b40
void FlushIOPCommand_0x172ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FlushIOPCommand_0x172ab0");
#endif

    ctx->pc = 0x172ab0u;

    // 0x172ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ac0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x172ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x172ac4: 0xc04c7ea  jal         func_131FA8
    ctx->pc = 0x172AC4u;
    SET_GPR_U32(ctx, 31, 0x172ACCu);
    ctx->pc = 0x172AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172AC4u;
            // 0x172ac8: 0x24840ae0  addiu       $a0, $a0, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131FA8u;
    if (runtime->hasFunction(0x131FA8u)) {
        auto targetFn = runtime->lookupFunction(0x131FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172ACCu; }
        if (ctx->pc != 0x172ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x131fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172ACCu; }
        if (ctx->pc != 0x172ACCu) { return; }
    }
    ctx->pc = 0x172ACCu;
    // 0x172acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172ACCu;
    {
        const bool branch_taken_0x172acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172acc) {
            ctx->pc = 0x172AE0u;
            goto label_172ae0;
        }
    }
    ctx->pc = 0x172AD4u;
    // 0x172ad4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x172AD4u;
    {
        const bool branch_taken_0x172ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AD4u;
            // 0x172ad8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ad4) {
            ctx->pc = 0x172B30u;
            goto label_172b30;
        }
    }
    ctx->pc = 0x172ADCu;
    // 0x172adc: 0x0  nop
    ctx->pc = 0x172adcu;
    // NOP
label_172ae0:
    // 0x172ae0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172ae4: 0x80220a70  lb          $v0, 0xA70($at)
    ctx->pc = 0x172ae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 2672)));
    // 0x172ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172AE8u;
    {
        const bool branch_taken_0x172ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AE8u;
            // 0x172aec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ae8) {
            ctx->pc = 0x172AF8u;
            goto label_172af8;
        }
    }
    ctx->pc = 0x172AF0u;
    // 0x172af0: 0xc05cd28  jal         func_1734A0
    ctx->pc = 0x172AF0u;
    SET_GPR_U32(ctx, 31, 0x172AF8u);
    ctx->pc = 0x172AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172AF0u;
            // 0x172af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A0u;
    if (runtime->hasFunction(0x1734A0u)) {
        auto targetFn = runtime->lookupFunction(0x1734A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AF8u; }
        if (ctx->pc != 0x172AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStatus_0x1734a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AF8u; }
        if (ctx->pc != 0x172AF8u) { return; }
    }
    ctx->pc = 0x172AF8u;
label_172af8:
    // 0x172af8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x172afc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172b00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x172b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b04: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x172b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x172b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b0c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x172B0Cu;
    SET_GPR_U32(ctx, 31, 0x172B14u);
    ctx->pc = 0x172B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172B0Cu;
            // 0x172b10: 0xa0200a70  sb          $zero, 0xA70($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 2672), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173DF0u;
    if (runtime->hasFunction(0x173DF0u)) {
        auto targetFn = runtime->lookupFunction(0x173DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B14u; }
        if (ctx->pc != 0x172B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SIFTransfer_0x173df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B14u; }
        if (ctx->pc != 0x172B14u) { return; }
    }
    ctx->pc = 0x172B14u;
    // 0x172b14: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172b18: 0xa4201f80  sh          $zero, 0x1F80($at)
    ctx->pc = 0x172b18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8064), (uint16_t)GPR_U32(ctx, 0));
    // 0x172b1c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172b20: 0x8c2209d0  lw          $v0, 0x9D0($at)
    ctx->pc = 0x172b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2512)));
    // 0x172b24: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172b28: 0xac2009d0  sw          $zero, 0x9D0($at)
    ctx->pc = 0x172b28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2512), GPR_U32(ctx, 0));
    // 0x172b2c: 0x0  nop
    ctx->pc = 0x172b2cu;
    // NOP
label_172b30:
    // 0x172b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b38: 0x3e00008  jr          $ra
    ctx->pc = 0x172B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B38u;
            // 0x172b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172AE0u: goto label_172ae0;
            case 0x172AF8u: goto label_172af8;
            case 0x172B30u: goto label_172b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172B40u;
}
