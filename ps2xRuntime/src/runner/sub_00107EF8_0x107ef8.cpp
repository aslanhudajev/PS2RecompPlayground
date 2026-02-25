#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_00107EF8
// Address: 0x107ef8 - 0x107f68
void sub_00107EF8_0x107ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00107EF8_0x107ef8");
#endif

    ctx->pc = 0x107ef8u;

    // 0x107ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107f00: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x107f00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x107f04: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107f08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x107F08u;
    {
        const bool branch_taken_0x107f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f08) {
            ctx->pc = 0x107F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107F08u;
            // 0x107f0c: 0x90830005  lbu         $v1, 0x5($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107F24u;
            goto label_107f24;
        }
    }
    ctx->pc = 0x107F10u;
    // 0x107f10: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x107f14: 0xc04c340  jal         func_130D00
    ctx->pc = 0x107F14u;
    SET_GPR_U32(ctx, 31, 0x107F1Cu);
    ctx->pc = 0x107F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F14u;
            // 0x107f18: 0x2484cec0  addiu       $a0, $a0, -0x3140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F1Cu; }
        if (ctx->pc != 0x107F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F1Cu; }
        if (ctx->pc != 0x107F1Cu) { return; }
    }
    ctx->pc = 0x107F1Cu;
    // 0x107f1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x107F1Cu;
    {
        const bool branch_taken_0x107f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F1Cu;
            // 0x107f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f1c) {
            ctx->pc = 0x107F58u;
            goto label_107f58;
        }
    }
    ctx->pc = 0x107F24u;
label_107f24:
    // 0x107f24: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x107f28: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x107f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x107f2c: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x107F2Cu;
    {
        const bool branch_taken_0x107f2c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x107F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F2Cu;
            // 0x107f30: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f2c) {
            ctx->pc = 0x107F54u;
            goto label_107f54;
        }
    }
    ctx->pc = 0x107F34u;
    // 0x107f34: 0x0  nop
    ctx->pc = 0x107f34u;
    // NOP
label_107f38:
    // 0x107f38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x107f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107f3c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x107f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x107f40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x107f44: 0x0  nop
    ctx->pc = 0x107f44u;
    // NOP
    // 0x107f48: 0x0  nop
    ctx->pc = 0x107f48u;
    // NOP
    // 0x107f4c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107F4Cu;
    {
        const bool branch_taken_0x107f4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f4c) {
            ctx->pc = 0x107F38u;
            goto label_107f38;
        }
    }
    ctx->pc = 0x107F54u;
label_107f54:
    // 0x107f54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x107f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107f58:
    // 0x107f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x107F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F5Cu;
            // 0x107f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107F24u: goto label_107f24;
            case 0x107F38u: goto label_107f38;
            case 0x107F54u: goto label_107f54;
            case 0x107F58u: goto label_107f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107F64u;
    // 0x107f64: 0x0  nop
    ctx->pc = 0x107f64u;
    // NOP
}
