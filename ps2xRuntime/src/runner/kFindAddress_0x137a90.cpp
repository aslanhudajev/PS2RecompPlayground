#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kFindAddress
// Address: 0x137a90 - 0x137ad0
void kFindAddress_0x137a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kFindAddress_0x137a90");
#endif

    ctx->pc = 0x137a90u;

    // 0x137a90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137a94: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x137A94u;
    {
        const bool branch_taken_0x137a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x137A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A94u;
            // 0x137a98: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a94) {
            ctx->pc = 0x137AC4u;
            goto label_137ac4;
        }
    }
    ctx->pc = 0x137A9Cu;
    // 0x137a9c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x137A9Cu;
    {
        const bool branch_taken_0x137a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a9c) {
            ctx->pc = 0x137AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137A9Cu;
            // 0x137aa0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137AC8u;
            goto label_137ac8;
        }
    }
    ctx->pc = 0x137AA4u;
    // 0x137aa4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x137aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_137aa8:
    // 0x137aa8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x137aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x137aac: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x137AACu;
    {
        const bool branch_taken_0x137aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x137AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AACu;
            // 0x137ab0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aac) {
            ctx->pc = 0x137AC4u;
            goto label_137ac4;
        }
    }
    ctx->pc = 0x137AB4u;
    // 0x137ab4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x137AB4u;
    {
        const bool branch_taken_0x137ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137ab4) {
            ctx->pc = 0x137AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137AB4u;
            // 0x137ab8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137AA8u;
            goto label_137aa8;
        }
    }
    ctx->pc = 0x137ABCu;
    // 0x137abc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137ABCu;
    {
        const bool branch_taken_0x137abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137ABCu;
            // 0x137ac0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137abc) {
            ctx->pc = 0x137AC8u;
            goto label_137ac8;
        }
    }
    ctx->pc = 0x137AC4u;
label_137ac4:
    // 0x137ac4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x137ac4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_137ac8:
    // 0x137ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x137AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137AC8u;
            // 0x137acc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137AA8u: goto label_137aa8;
            case 0x137AC4u: goto label_137ac4;
            case 0x137AC8u: goto label_137ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137AD0u;
}
