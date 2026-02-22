#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ftoi
// Address: 0x10f3e8 - 0x10f478
void ftoi_0x10f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f3e8u;

    // 0x10f3e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10f3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3ec: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x10f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x10f3f0: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x10f3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x10f3f4: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x10f3f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x10f3f8: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x10f3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x10f3fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F3FCu;
    {
        const bool branch_taken_0x10f3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3FCu;
            // 0x10f400: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3fc) {
            ctx->pc = 0x10F40Cu;
            goto label_10f40c;
        }
    }
    ctx->pc = 0x10F404u;
    // 0x10f404: 0x3e00008  jr          $ra
    ctx->pc = 0x10F404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F404u;
            // 0x10f408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F40Cu: goto label_10f40c;
            case 0x10F41Cu: goto label_10f41c;
            case 0x10F460u: goto label_10f460;
            case 0x10F46Cu: goto label_10f46c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10F40Cu;
label_10f40c:
    // 0x10f40c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F40Cu;
    {
        const bool branch_taken_0x10f40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F40Cu;
            // 0x10f410: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f40c) {
            ctx->pc = 0x10F41Cu;
            goto label_10f41c;
        }
    }
    ctx->pc = 0x10F414u;
    // 0x10f414: 0x3e00008  jr          $ra
    ctx->pc = 0x10F414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F414u;
            // 0x10f418: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F40Cu: goto label_10f40c;
            case 0x10F41Cu: goto label_10f41c;
            case 0x10F460u: goto label_10f460;
            case 0x10F46Cu: goto label_10f46c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10F41Cu;
label_10f41c:
    // 0x10f41c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10f41cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x10f420: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x10f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x10f424: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x10f424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x10f428: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10F428u;
    {
        const bool branch_taken_0x10f428 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F428u;
            // 0x10f42c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f428) {
            ctx->pc = 0x10F460u;
            goto label_10f460;
        }
    }
    ctx->pc = 0x10F430u;
    // 0x10f430: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x10f430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x10f434: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f438: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x10f438u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x10f43c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10f440: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10f440u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10f444: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x10f444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x10f448: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x10f448u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)3u)));
    // 0x10f44c: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F44Cu;
    {
        const bool branch_taken_0x10f44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f44c) {
            ctx->pc = 0x10F450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10F44Cu;
            // 0x10f450: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10F46Cu;
            goto label_10f46c;
        }
    }
    ctx->pc = 0x10F454u;
    // 0x10f454: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x10f454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x10f458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F458u;
    {
        const bool branch_taken_0x10f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F458u;
            // 0x10f45c: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f458) {
            ctx->pc = 0x10F46Cu;
            goto label_10f46c;
        }
    }
    ctx->pc = 0x10F460u;
label_10f460:
    // 0x10f460: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x10f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10f464: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10f464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10f468: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x10f468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_10f46c:
    // 0x10f46c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x10f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10f470: 0x3e00008  jr          $ra
    ctx->pc = 0x10F470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F470u;
            // 0x10f474: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F40Cu: goto label_10f40c;
            case 0x10F41Cu: goto label_10f41c;
            case 0x10F460u: goto label_10f460;
            case 0x10F46Cu: goto label_10f46c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10F478u;
}
