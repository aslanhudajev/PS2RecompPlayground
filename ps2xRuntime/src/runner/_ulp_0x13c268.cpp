#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ulp
// Address: 0x13c268 - 0x13c300
void _ulp_0x13c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ulp_0x13c268");
#endif

    ctx->pc = 0x13c268u;

    // 0x13c268: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x13c268u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x13c26c: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x13c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x13c270: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x13c270u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13c274: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x13c274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x13c278: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13c27c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C27Cu;
    {
        const bool branch_taken_0x13c27c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13C280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C27Cu;
            // 0x13c280: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c27c) {
            ctx->pc = 0x13C28Cu;
            goto label_13c28c;
        }
    }
    ctx->pc = 0x13C284u;
    // 0x13c284: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13C284u;
    {
        const bool branch_taken_0x13c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C284u;
            // 0x13c288: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c284) {
            ctx->pc = 0x13C2F4u;
            goto label_13c2f4;
        }
    }
    ctx->pc = 0x13C28Cu;
label_13c28c:
    // 0x13c28c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x13c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x13c290: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x13c290u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x13c294: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x13c294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x13c298: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C298u;
    {
        const bool branch_taken_0x13c298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C298u;
            // 0x13c29c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c298) {
            ctx->pc = 0x13C2ACu;
            goto label_13c2ac;
        }
    }
    ctx->pc = 0x13C2A0u;
    // 0x13c2a0: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x13c2a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x13c2a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13C2A4u;
    {
        const bool branch_taken_0x13c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2A4u;
            // 0x13c2a8: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2a4) {
            ctx->pc = 0x13C2F4u;
            goto label_13c2f4;
        }
    }
    ctx->pc = 0x13C2ACu;
label_13c2ac:
    // 0x13c2ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x13c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x13c2b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13c2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c2b4: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x13c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x13c2b8: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x13c2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x13c2bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C2BCu;
    {
        const bool branch_taken_0x13c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2BCu;
            // 0x13c2c0: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2bc) {
            ctx->pc = 0x13C2D8u;
            goto label_13c2d8;
        }
    }
    ctx->pc = 0x13C2C4u;
    // 0x13c2c4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x13c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x13c2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c2cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c2d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2D0u;
            // 0x13c2d4: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C2DCu;
            goto label_13c2dc;
        }
    }
    ctx->pc = 0x13C2D8u;
label_13c2d8:
    // 0x13c2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c2dc:
    // 0x13c2dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c2e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c2e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c2e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c2ec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x13c2ecu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x13c2f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x13c2f0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
label_13c2f4:
    // 0x13c2f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13c2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C2F8u;
            // 0x13c2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C28Cu: goto label_13c28c;
            case 0x13C2ACu: goto label_13c2ac;
            case 0x13C2D8u: goto label_13c2d8;
            case 0x13C2DCu: goto label_13c2dc;
            case 0x13C2F4u: goto label_13c2f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C300u;
}
