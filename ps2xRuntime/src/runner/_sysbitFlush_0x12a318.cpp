#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sysbitFlush
// Address: 0x12a318 - 0x12a3b0
void _sysbitFlush_0x12a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitFlush_0x12a318");
#endif

    ctx->pc = 0x12a318u;

    // 0x12a318: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12a318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a31c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x12a31cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12a320: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x12a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12a324: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x12a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x12a328: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12a328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12a32c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x12a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x12a330: 0x2c640039  sltiu       $a0, $v1, 0x39
    ctx->pc = 0x12a330u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x12a334: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12A334u;
    {
        const bool branch_taken_0x12a334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A334u;
            // 0x12a338: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a334) {
            ctx->pc = 0x12A39Cu;
            goto label_12a39c;
        }
    }
    ctx->pc = 0x12A33Cu;
    // 0x12a33c: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x12a33cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x12a340: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x12a340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a344: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x12a344u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_12a348:
    // 0x12a348: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x12a348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x12a34c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x12a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x12a350: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x12a350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12a354: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x12a354u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a358: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x12a358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12a35c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x12a35cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12a360: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x12a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x12a364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a368: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x12a368u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x12a36c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x12a36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12a370: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x12a370u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x12a374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A374u;
    {
        const bool branch_taken_0x12a374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A374u;
            // 0x12a378: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a374) {
            ctx->pc = 0x12A384u;
            goto label_12a384;
        }
    }
    ctx->pc = 0x12A37Cu;
    // 0x12a37c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x12a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x12a380: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x12a380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_12a384:
    // 0x12a384: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x12a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x12a388: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x12a388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x12a38c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A38Cu;
    {
        const bool branch_taken_0x12a38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A38Cu;
            // 0x12a390: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a38c) {
            ctx->pc = 0x12A348u;
            goto label_12a348;
        }
    }
    ctx->pc = 0x12A394u;
    // 0x12a394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A394u;
    {
        const bool branch_taken_0x12a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A394u;
            // 0x12a398: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a394) {
            ctx->pc = 0x12A3A8u;
            goto label_12a3a8;
        }
    }
    ctx->pc = 0x12A39Cu;
label_12a39c:
    // 0x12a39c: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x12a39cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x12a3a0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x12a3a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3a4: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x12a3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_12a3a8:
    // 0x12a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3A8u;
            // 0x12a3ac: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A348u: goto label_12a348;
            case 0x12A384u: goto label_12a384;
            case 0x12A39Cu: goto label_12a39c;
            case 0x12A3A8u: goto label_12a3a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A3B0u;
}
