#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ftoi
// Address: 0x1304e0 - 0x130570
void ftoi_0x1304e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ftoi_0x1304e0");
#endif

    ctx->pc = 0x1304e0u;

    // 0x1304e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1304e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304e4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x1304e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x1304e8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x1304e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x1304ec: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x1304ecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x1304f0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x1304f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x1304f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1304F4u;
    {
        const bool branch_taken_0x1304f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304F4u;
            // 0x1304f8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304f4) {
            ctx->pc = 0x130504u;
            goto label_130504;
        }
    }
    ctx->pc = 0x1304FCu;
    // 0x1304fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1304FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304FCu;
            // 0x130500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130504u: goto label_130504;
            case 0x130514u: goto label_130514;
            case 0x130558u: goto label_130558;
            case 0x130564u: goto label_130564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130504u;
label_130504:
    // 0x130504: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130504u;
    {
        const bool branch_taken_0x130504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130504u;
            // 0x130508: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130504) {
            ctx->pc = 0x130514u;
            goto label_130514;
        }
    }
    ctx->pc = 0x13050Cu;
    // 0x13050c: 0x3e00008  jr          $ra
    ctx->pc = 0x13050Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13050Cu;
            // 0x130510: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130504u: goto label_130504;
            case 0x130514u: goto label_130514;
            case 0x130558u: goto label_130558;
            case 0x130564u: goto label_130564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130514u;
label_130514:
    // 0x130514: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x130514u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x130518: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x130518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x13051c: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x13051cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x130520: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x130520u;
    {
        const bool branch_taken_0x130520 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x130524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130520u;
            // 0x130524: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130520) {
            ctx->pc = 0x130558u;
            goto label_130558;
        }
    }
    ctx->pc = 0x130528u;
    // 0x130528: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x130528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x13052c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130530: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x130530u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x130534: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x130534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130538: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x130538u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x13053c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x13053cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x130540: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x130540u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)3u)));
    // 0x130544: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130544u;
    {
        const bool branch_taken_0x130544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x130544) {
            ctx->pc = 0x130548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130544u;
            // 0x130548: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130564u;
            goto label_130564;
        }
    }
    ctx->pc = 0x13054Cu;
    // 0x13054c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x13054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x130550: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130550u;
            // 0x130554: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130550) {
            ctx->pc = 0x130564u;
            goto label_130564;
        }
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x130558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x13055c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13055cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130560: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_130564:
    // 0x130564: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x130564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x130568: 0x3e00008  jr          $ra
    ctx->pc = 0x130568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13056Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130568u;
            // 0x13056c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130504u: goto label_130504;
            case 0x130514u: goto label_130514;
            case 0x130558u: goto label_130558;
            case 0x130564u: goto label_130564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130570u;
}
