#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemMoveFunction
// Address: 0x1965c0 - 0x196610
void ItemMoveFunction_0x1965c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemMoveFunction_0x1965c0");
#endif

    ctx->pc = 0x1965c0u;

label_1965c0:
    // 0x1965c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1965c4:
    // 0x1965c4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1965c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
label_1965c8:
    // 0x1965c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1965c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1965cc:
    // 0x1965cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1965ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1965d0:
    // 0x1965d0: 0x8c241608  lw          $a0, 0x1608($at)
    ctx->pc = 0x1965d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5640)));
label_1965d4:
    // 0x1965d4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1965d8:
    if (ctx->pc == 0x1965D8u) {
        ctx->pc = 0x1965DCu;
        goto label_1965dc;
    }
    ctx->pc = 0x1965D4u;
    {
        const bool branch_taken_0x1965d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965d4) {
            ctx->pc = 0x196600u;
            goto label_196600;
        }
    }
    ctx->pc = 0x1965DCu;
label_1965dc:
    // 0x1965dc: 0x0  nop
    ctx->pc = 0x1965dcu;
    // NOP
label_1965e0:
    // 0x1965e0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1965e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1965e4:
    // 0x1965e4: 0x40f809  jalr        $v0
label_1965e8:
    if (ctx->pc == 0x1965E8u) {
        ctx->pc = 0x1965E8u;
            // 0x1965e8: 0x8c900034  lw          $s0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = 0x1965ECu;
        goto label_1965ec;
    }
    ctx->pc = 0x1965E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1965ECu);
        ctx->pc = 0x1965E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965E4u;
            // 0x1965e8: 0x8c900034  lw          $s0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1965C0u: goto label_1965c0;
            case 0x1965C4u: goto label_1965c4;
            case 0x1965C8u: goto label_1965c8;
            case 0x1965CCu: goto label_1965cc;
            case 0x1965D0u: goto label_1965d0;
            case 0x1965D4u: goto label_1965d4;
            case 0x1965D8u: goto label_1965d8;
            case 0x1965DCu: goto label_1965dc;
            case 0x1965E0u: goto label_1965e0;
            case 0x1965E4u: goto label_1965e4;
            case 0x1965E8u: goto label_1965e8;
            case 0x1965ECu: goto label_1965ec;
            case 0x1965F0u: goto label_1965f0;
            case 0x1965F4u: goto label_1965f4;
            case 0x1965F8u: goto label_1965f8;
            case 0x1965FCu: goto label_1965fc;
            case 0x196600u: goto label_196600;
            case 0x196604u: goto label_196604;
            case 0x196608u: goto label_196608;
            case 0x19660Cu: goto label_19660c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1965ECu; }
            if (ctx->pc != 0x1965ECu) { return; }
        }
    }
    ctx->pc = 0x1965ECu;
label_1965ec:
    // 0x1965ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1965ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1965f0:
    // 0x1965f0: 0x0  nop
    ctx->pc = 0x1965f0u;
    // NOP
label_1965f4:
    // 0x1965f4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_1965f8:
    if (ctx->pc == 0x1965F8u) {
        ctx->pc = 0x1965FCu;
        goto label_1965fc;
    }
    ctx->pc = 0x1965F4u;
    {
        const bool branch_taken_0x1965f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965f4) {
            ctx->pc = 0x1965E0u;
            goto label_1965e0;
        }
    }
    ctx->pc = 0x1965FCu;
label_1965fc:
    // 0x1965fc: 0x0  nop
    ctx->pc = 0x1965fcu;
    // NOP
label_196600:
    // 0x196600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196604:
    // 0x196604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196608:
    // 0x196608: 0x3e00008  jr          $ra
label_19660c:
    if (ctx->pc == 0x19660Cu) {
        ctx->pc = 0x19660Cu;
            // 0x19660c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x196610u;
        goto label_fallthrough_0x196608;
    }
    ctx->pc = 0x196608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196608u;
            // 0x19660c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1965C0u: goto label_1965c0;
            case 0x1965C4u: goto label_1965c4;
            case 0x1965C8u: goto label_1965c8;
            case 0x1965CCu: goto label_1965cc;
            case 0x1965D0u: goto label_1965d0;
            case 0x1965D4u: goto label_1965d4;
            case 0x1965D8u: goto label_1965d8;
            case 0x1965DCu: goto label_1965dc;
            case 0x1965E0u: goto label_1965e0;
            case 0x1965E4u: goto label_1965e4;
            case 0x1965E8u: goto label_1965e8;
            case 0x1965ECu: goto label_1965ec;
            case 0x1965F0u: goto label_1965f0;
            case 0x1965F4u: goto label_1965f4;
            case 0x1965F8u: goto label_1965f8;
            case 0x1965FCu: goto label_1965fc;
            case 0x196600u: goto label_196600;
            case 0x196604u: goto label_196604;
            case 0x196608u: goto label_196608;
            case 0x19660Cu: goto label_19660c;
            default: break;
        }
        return;
    }
label_fallthrough_0x196608:
    ctx->pc = 0x196610u;
}
