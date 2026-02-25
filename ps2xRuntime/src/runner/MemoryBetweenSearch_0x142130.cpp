#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemoryBetweenSearch
// Address: 0x142130 - 0x1421c0
void MemoryBetweenSearch_0x142130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemoryBetweenSearch_0x142130");
#endif

    ctx->pc = 0x142130u;

    // 0x142130: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142134: 0xac2079f8  sw          $zero, 0x79F8($at)
    ctx->pc = 0x142134u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31224), GPR_U32(ctx, 0));
    // 0x142138: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14213c: 0x8c2679e8  lw          $a2, 0x79E8($at)
    ctx->pc = 0x14213cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31208)));
label_142140:
    // 0x142140: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x142140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x142144: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x142148: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x142148u;
    {
        const bool branch_taken_0x142148 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142148u;
            // 0x14214c: 0x3c010024  lui         $at, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142148) {
            ctx->pc = 0x142180u;
            goto label_142180;
        }
    }
    ctx->pc = 0x142150u;
    // 0x142150: 0xac2579e0  sw          $a1, 0x79E0($at)
    ctx->pc = 0x142150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31200), GPR_U32(ctx, 5));
    // 0x142154: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142158: 0x8c247a10  lw          $a0, 0x7A10($at)
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31248)));
    // 0x14215c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x14215cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142160: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x142160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x142164: 0x8c237a18  lw          $v1, 0x7A18($at)
    ctx->pc = 0x142164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31256)));
    // 0x142168: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x142168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14216c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x14216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142170: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x142170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x142174: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x142174u;
    {
        const bool branch_taken_0x142174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142174u;
            // 0x142178: 0xac2379f0  sw          $v1, 0x79F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142174) {
            ctx->pc = 0x1421B8u;
            goto label_1421b8;
        }
    }
    ctx->pc = 0x14217Cu;
    // 0x14217c: 0x0  nop
    ctx->pc = 0x14217cu;
    // NOP
label_142180:
    // 0x142180: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x142180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x142184: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x142184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x142188: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14218c: 0x8c2379f8  lw          $v1, 0x79F8($at)
    ctx->pc = 0x14218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31224)));
    // 0x142190: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x142190u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142194: 0x1420ffea  bnez        $at, . + 4 + (-0x16 << 2)
    ctx->pc = 0x142194u;
    {
        const bool branch_taken_0x142194 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x142198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142194u;
            // 0x142198: 0x3c010024  lui         $at, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142194) {
            ctx->pc = 0x142140u;
            goto label_142140;
        }
    }
    ctx->pc = 0x14219Cu;
    // 0x14219c: 0xac2479f8  sw          $a0, 0x79F8($at)
    ctx->pc = 0x14219cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31224), GPR_U32(ctx, 4));
    // 0x1421a0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1421a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1421a4: 0xac2579d0  sw          $a1, 0x79D0($at)
    ctx->pc = 0x1421a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31184), GPR_U32(ctx, 5));
    // 0x1421a8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1421a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1421ac: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1421ACu;
    {
        const bool branch_taken_0x1421ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1421B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421ACu;
            // 0x1421b0: 0xac2679d8  sw          $a2, 0x79D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31192), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1421ac) {
            ctx->pc = 0x142140u;
            goto label_142140;
        }
    }
    ctx->pc = 0x1421B4u;
    // 0x1421b4: 0x0  nop
    ctx->pc = 0x1421b4u;
    // NOP
label_1421b8:
    // 0x1421b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1421B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142140u: goto label_142140;
            case 0x142180u: goto label_142180;
            case 0x1421B8u: goto label_1421b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1421C0u;
}
