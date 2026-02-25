#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_codes_new
// Address: 0x1f10a8 - 0x1f111c
void inflate_codes_new_0x1f10a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_codes_new_0x1f10a8");
#endif

    ctx->pc = 0x1f10a8u;

label_1f10a8:
    // 0x1f10a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f10ac:
    // 0x1f10ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f10acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f10b0:
    // 0x1f10b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f10b4:
    // 0x1f10b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f10b8:
    // 0x1f10b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1f10bc:
    // 0x1f10bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f10bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f10c0:
    // 0x1f10c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f10c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f10c4:
    // 0x1f10c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f10c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f10c8:
    // 0x1f10c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f10c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f10cc:
    // 0x1f10cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f10ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f10d0:
    // 0x1f10d0: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x1f10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_1f10d4:
    // 0x1f10d4: 0x8d040030  lw          $a0, 0x30($t0)
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_1f10d8:
    // 0x1f10d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f10d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f10dc:
    // 0x1f10dc: 0x40f809  jalr        $v0
label_1f10e0:
    if (ctx->pc == 0x1F10E0u) {
        ctx->pc = 0x1F10E0u;
            // 0x1f10e0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x1F10E4u;
        goto label_1f10e4;
    }
    ctx->pc = 0x1F10DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F10E4u);
        ctx->pc = 0x1F10E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F10DCu;
            // 0x1f10e0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F10A8u: goto label_1f10a8;
            case 0x1F10ACu: goto label_1f10ac;
            case 0x1F10B0u: goto label_1f10b0;
            case 0x1F10B4u: goto label_1f10b4;
            case 0x1F10B8u: goto label_1f10b8;
            case 0x1F10BCu: goto label_1f10bc;
            case 0x1F10C0u: goto label_1f10c0;
            case 0x1F10C4u: goto label_1f10c4;
            case 0x1F10C8u: goto label_1f10c8;
            case 0x1F10CCu: goto label_1f10cc;
            case 0x1F10D0u: goto label_1f10d0;
            case 0x1F10D4u: goto label_1f10d4;
            case 0x1F10D8u: goto label_1f10d8;
            case 0x1F10DCu: goto label_1f10dc;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F10E8u: goto label_1f10e8;
            case 0x1F10ECu: goto label_1f10ec;
            case 0x1F10F0u: goto label_1f10f0;
            case 0x1F10F4u: goto label_1f10f4;
            case 0x1F10F8u: goto label_1f10f8;
            case 0x1F10FCu: goto label_1f10fc;
            case 0x1F1100u: goto label_1f1100;
            case 0x1F1104u: goto label_1f1104;
            case 0x1F1108u: goto label_1f1108;
            case 0x1F110Cu: goto label_1f110c;
            case 0x1F1110u: goto label_1f1110;
            case 0x1F1114u: goto label_1f1114;
            case 0x1F1118u: goto label_1f1118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F10E4u; }
            if (ctx->pc != 0x1F10E4u) { return; }
        }
    }
    ctx->pc = 0x1F10E4u;
label_1f10e4:
    // 0x1f10e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1f10e8:
    if (ctx->pc == 0x1F10E8u) {
        ctx->pc = 0x1F10E8u;
            // 0x1f10e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1F10ECu;
        goto label_1f10ec;
    }
    ctx->pc = 0x1F10E4u;
    {
        const bool branch_taken_0x1f10e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10e4) {
            ctx->pc = 0x1F10E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F10E4u;
            // 0x1f10e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1104u;
            goto label_1f1104;
        }
    }
    ctx->pc = 0x1F10ECu;
label_1f10ec:
    // 0x1f10ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f10f0:
    // 0x1f10f0: 0xa0500010  sb          $s0, 0x10($v0)
    ctx->pc = 0x1f10f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 16));
label_1f10f4:
    // 0x1f10f4: 0xa0510011  sb          $s1, 0x11($v0)
    ctx->pc = 0x1f10f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 17));
label_1f10f8:
    // 0x1f10f8: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x1f10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
label_1f10fc:
    // 0x1f10fc: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x1f10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
label_1f1100:
    // 0x1f1100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1104:
    // 0x1f1104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f1108:
    // 0x1f1108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f110c:
    // 0x1f110c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f110cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f1110:
    // 0x1f1110: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f1110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1114:
    // 0x1f1114: 0x3e00008  jr          $ra
label_1f1118:
    if (ctx->pc == 0x1F1118u) {
        ctx->pc = 0x1F1118u;
            // 0x1f1118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F111Cu;
        goto label_fallthrough_0x1f1114;
    }
    ctx->pc = 0x1F1114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1114u;
            // 0x1f1118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F10A8u: goto label_1f10a8;
            case 0x1F10ACu: goto label_1f10ac;
            case 0x1F10B0u: goto label_1f10b0;
            case 0x1F10B4u: goto label_1f10b4;
            case 0x1F10B8u: goto label_1f10b8;
            case 0x1F10BCu: goto label_1f10bc;
            case 0x1F10C0u: goto label_1f10c0;
            case 0x1F10C4u: goto label_1f10c4;
            case 0x1F10C8u: goto label_1f10c8;
            case 0x1F10CCu: goto label_1f10cc;
            case 0x1F10D0u: goto label_1f10d0;
            case 0x1F10D4u: goto label_1f10d4;
            case 0x1F10D8u: goto label_1f10d8;
            case 0x1F10DCu: goto label_1f10dc;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F10E8u: goto label_1f10e8;
            case 0x1F10ECu: goto label_1f10ec;
            case 0x1F10F0u: goto label_1f10f0;
            case 0x1F10F4u: goto label_1f10f4;
            case 0x1F10F8u: goto label_1f10f8;
            case 0x1F10FCu: goto label_1f10fc;
            case 0x1F1100u: goto label_1f1100;
            case 0x1F1104u: goto label_1f1104;
            case 0x1F1108u: goto label_1f1108;
            case 0x1F110Cu: goto label_1f110c;
            case 0x1F1110u: goto label_1f1110;
            case 0x1F1114u: goto label_1f1114;
            case 0x1F1118u: goto label_1f1118;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f1114:
    ctx->pc = 0x1F111Cu;
}
