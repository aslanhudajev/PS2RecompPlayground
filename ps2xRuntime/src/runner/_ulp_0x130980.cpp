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
// Address: 0x130980 - 0x130a18
void _ulp_0x130980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ulp_0x130980");
#endif

    ctx->pc = 0x130980u;

    // 0x130980: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x130980u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x130984: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x130984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x130988: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x130988u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13098c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x13098cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x130990: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x130990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130994: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130994u;
    {
        const bool branch_taken_0x130994 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x130998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130994u;
            // 0x130998: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130994) {
            ctx->pc = 0x1309A4u;
            goto label_1309a4;
        }
    }
    ctx->pc = 0x13099Cu;
    // 0x13099c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13099Cu;
    {
        const bool branch_taken_0x13099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13099Cu;
            // 0x1309a0: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13099c) {
            ctx->pc = 0x130A0Cu;
            goto label_130a0c;
        }
    }
    ctx->pc = 0x1309A4u;
label_1309a4:
    // 0x1309a4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1309a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1309a8: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1309ac: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x1309acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1309b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1309B0u;
    {
        const bool branch_taken_0x1309b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1309B0u;
            // 0x1309b4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309b0) {
            ctx->pc = 0x1309C4u;
            goto label_1309c4;
        }
    }
    ctx->pc = 0x1309B8u;
    // 0x1309b8: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1309b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1309bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1309BCu;
    {
        const bool branch_taken_0x1309bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1309BCu;
            // 0x1309c0: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309bc) {
            ctx->pc = 0x130A0Cu;
            goto label_130a0c;
        }
    }
    ctx->pc = 0x1309C4u;
label_1309c4:
    // 0x1309c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1309c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1309c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1309c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1309cc: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1309ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1309d0: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x1309d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1309d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1309D4u;
    {
        const bool branch_taken_0x1309d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1309D4u;
            // 0x1309d8: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309d4) {
            ctx->pc = 0x1309F0u;
            goto label_1309f0;
        }
    }
    ctx->pc = 0x1309DCu;
    // 0x1309dc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1309e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1309e4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1309e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1309e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1309E8u;
    {
        const bool branch_taken_0x1309e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1309E8u;
            // 0x1309ec: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309e8) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x1309F0u;
label_1309f0:
    // 0x1309f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1309f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1309f4:
    // 0x1309f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1309f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1309f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1309f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1309fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1309fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130a00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x130a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x130a04: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x130a04u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x130a08: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x130a08u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
label_130a0c:
    // 0x130a0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x130a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a10: 0x3e00008  jr          $ra
    ctx->pc = 0x130A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A10u;
            // 0x130a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1309A4u: goto label_1309a4;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x130A0Cu: goto label_130a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130A18u;
}
