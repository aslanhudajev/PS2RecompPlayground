#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_0010A8E0
// Address: 0x10a8e0 - 0x10a930
void sub_0010A8E0_0x10a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_0010A8E0_0x10a8e0");
#endif

    ctx->pc = 0x10a8e0u;

    // 0x10a8e0: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x10a8e0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)63u)));
    // 0x10a8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a8e8: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10A8E8u;
    {
        const bool branch_taken_0x10a8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8E8u;
            // 0x10a8ec: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8e8) {
            ctx->pc = 0x10A914u;
            goto label_10a914;
        }
    }
    ctx->pc = 0x10A8F0u;
    // 0x10a8f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A8F0u;
    {
        const bool branch_taken_0x10a8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8F0u;
            // 0x10a8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8f0) {
            ctx->pc = 0x10A928u;
            goto label_10a928;
        }
    }
    ctx->pc = 0x10A8F8u;
    // 0x10a8f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a8fc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A8FCu;
    {
        const bool branch_taken_0x10a8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8FCu;
            // 0x10a900: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8fc) {
            ctx->pc = 0x10A924u;
            goto label_10a924;
        }
    }
    ctx->pc = 0x10A904u;
    // 0x10a904: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A904u;
    {
        const bool branch_taken_0x10a904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A904u;
            // 0x10a908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a904) {
            ctx->pc = 0x10A91Cu;
            goto label_10a91c;
        }
    }
    ctx->pc = 0x10A90Cu;
    // 0x10a90c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10A90Cu;
    {
        const bool branch_taken_0x10a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a90c) {
            ctx->pc = 0x10A928u;
            goto label_10a928;
        }
    }
    ctx->pc = 0x10A914u;
label_10a914:
    // 0x10a914: 0x3e00008  jr          $ra
    ctx->pc = 0x10A914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A914u;
            // 0x10a918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A914u: goto label_10a914;
            case 0x10A91Cu: goto label_10a91c;
            case 0x10A924u: goto label_10a924;
            case 0x10A928u: goto label_10a928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A91Cu;
label_10a91c:
    // 0x10a91c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A91Cu;
            // 0x10a920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A914u: goto label_10a914;
            case 0x10A91Cu: goto label_10a91c;
            case 0x10A924u: goto label_10a924;
            case 0x10A928u: goto label_10a928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A924u;
label_10a924:
    // 0x10a924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a928:
    // 0x10a928: 0x3e00008  jr          $ra
    ctx->pc = 0x10A928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A914u: goto label_10a914;
            case 0x10A91Cu: goto label_10a91c;
            case 0x10A924u: goto label_10a924;
            case 0x10A928u: goto label_10a928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A930u;
}
