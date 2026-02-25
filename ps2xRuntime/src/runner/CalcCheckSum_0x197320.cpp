#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CalcCheckSum
// Address: 0x197320 - 0x1973b8
void CalcCheckSum_0x197320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CalcCheckSum_0x197320");
#endif

    ctx->pc = 0x197320u;

    // 0x197320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197328:
    // 0x197328: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x197328u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19732c: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x19732cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x197330: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x197330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x197334: 0x2ce302d4  sltiu       $v1, $a3, 0x2D4
    ctx->pc = 0x197334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)724) ? 1 : 0);
    // 0x197338: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x197338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19733c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x19733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x197340: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x197344: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x197344u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197348: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x19734c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x197350: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x197354: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x197358: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x197358u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19735c: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x19735cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x197360: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x197364: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x197368: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19736c: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197370: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x197374: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x197378: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19737c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x19737Cu;
    {
        const bool branch_taken_0x19737c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19737Cu;
            // 0x197380: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19737c) {
            ctx->pc = 0x197328u;
            goto label_197328;
        }
    }
    ctx->pc = 0x197384u;
    // 0x197384: 0x2ce102dc  sltiu       $at, $a3, 0x2DC
    ctx->pc = 0x197384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)732) ? 1 : 0);
    // 0x197388: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x197388u;
    {
        const bool branch_taken_0x197388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197388) {
            ctx->pc = 0x1973B0u;
            goto label_1973b0;
        }
    }
    ctx->pc = 0x197390u;
label_197390:
    // 0x197390: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197394: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x197394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197398: 0x2ce302dc  sltiu       $v1, $a3, 0x2DC
    ctx->pc = 0x197398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)732) ? 1 : 0);
    // 0x19739c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1973a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1973a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1973A4u;
    {
        const bool branch_taken_0x1973a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973a4) {
            ctx->pc = 0x197390u;
            goto label_197390;
        }
    }
    ctx->pc = 0x1973ACu;
    // 0x1973ac: 0x0  nop
    ctx->pc = 0x1973acu;
    // NOP
label_1973b0:
    // 0x1973b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1973B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197328u: goto label_197328;
            case 0x197390u: goto label_197390;
            case 0x1973B0u: goto label_1973b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1973B8u;
}
