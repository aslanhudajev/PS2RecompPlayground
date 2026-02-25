#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflateInit2_
// Address: 0x1ef1a8 - 0x1ef2f8
void inflateInit2__0x1ef1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflateInit2__0x1ef1a8");
#endif

    ctx->pc = 0x1ef1a8u;

label_1ef1a8:
    // 0x1ef1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ef1ac:
    // 0x1ef1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ef1b0:
    // 0x1ef1b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ef1b4:
    // 0x1ef1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ef1b8:
    // 0x1ef1b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef1bc:
    // 0x1ef1bc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1ef1c0:
    if (ctx->pc == 0x1EF1C0u) {
        ctx->pc = 0x1EF1C0u;
            // 0x1ef1c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1C4u;
        goto label_1ef1c4;
    }
    ctx->pc = 0x1EF1BCu;
    {
        const bool branch_taken_0x1ef1bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1BCu;
            // 0x1ef1c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1bc) {
            ctx->pc = 0x1EF1E0u;
            goto label_1ef1e0;
        }
    }
    ctx->pc = 0x1EF1C4u;
label_1ef1c4:
    // 0x1ef1c4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1ef1c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ef1c8:
    // 0x1ef1c8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1ef1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1ef1cc:
    // 0x1ef1cc: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_1ef1d0:
    if (ctx->pc == 0x1EF1D0u) {
        ctx->pc = 0x1EF1D0u;
            // 0x1ef1d0: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x1EF1D4u;
        goto label_1ef1d4;
    }
    ctx->pc = 0x1EF1CCu;
    {
        const bool branch_taken_0x1ef1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1CCu;
            // 0x1ef1d0: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1cc) {
            ctx->pc = 0x1EF2E4u;
            goto label_1ef2e4;
        }
    }
    ctx->pc = 0x1EF1D4u;
label_1ef1d4:
    // 0x1ef1d4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1ef1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1ef1d8:
    // 0x1ef1d8: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_1ef1dc:
    if (ctx->pc == 0x1EF1DCu) {
        ctx->pc = 0x1EF1E0u;
        goto label_1ef1e0;
    }
    ctx->pc = 0x1EF1D8u;
    {
        const bool branch_taken_0x1ef1d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ef1d8) {
            ctx->pc = 0x1EF1E8u;
            goto label_1ef1e8;
        }
    }
    ctx->pc = 0x1EF1E0u;
label_1ef1e0:
    // 0x1ef1e0: 0x10000040  b           . + 4 + (0x40 << 2)
label_1ef1e4:
    if (ctx->pc == 0x1EF1E4u) {
        ctx->pc = 0x1EF1E4u;
            // 0x1ef1e4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x1EF1E8u;
        goto label_1ef1e8;
    }
    ctx->pc = 0x1EF1E0u;
    {
        const bool branch_taken_0x1ef1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1E0u;
            // 0x1ef1e4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1e0) {
            ctx->pc = 0x1EF2E4u;
            goto label_1ef2e4;
        }
    }
    ctx->pc = 0x1EF1E8u;
label_1ef1e8:
    // 0x1ef1e8: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_1ef1ec:
    if (ctx->pc == 0x1EF1ECu) {
        ctx->pc = 0x1EF1ECu;
            // 0x1ef1ec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1EF1F0u;
        goto label_1ef1f0;
    }
    ctx->pc = 0x1EF1E8u;
    {
        const bool branch_taken_0x1ef1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1E8u;
            // 0x1ef1ec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1e8) {
            ctx->pc = 0x1EF2E4u;
            goto label_1ef2e4;
        }
    }
    ctx->pc = 0x1EF1F0u;
label_1ef1f0:
    // 0x1ef1f0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ef1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ef1f4:
    // 0x1ef1f4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ef1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef1f8:
    // 0x1ef1f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1ef1fc:
    if (ctx->pc == 0x1EF1FCu) {
        ctx->pc = 0x1EF1FCu;
            // 0x1ef1fc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1EF200u;
        goto label_1ef200;
    }
    ctx->pc = 0x1EF1F8u;
    {
        const bool branch_taken_0x1ef1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1f8) {
            ctx->pc = 0x1EF1FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1F8u;
            // 0x1ef1fc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF214u;
            goto label_1ef214;
        }
    }
    ctx->pc = 0x1EF200u;
label_1ef200:
    // 0x1ef200: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ef200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1ef204:
    // 0x1ef204: 0x2442f098  addiu       $v0, $v0, -0xF68
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963352));
label_1ef208:
    // 0x1ef208: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1ef208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1ef20c:
    // 0x1ef20c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ef20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1ef210:
    // 0x1ef210: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ef210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1ef214:
    // 0x1ef214: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1ef218:
    if (ctx->pc == 0x1EF218u) {
        ctx->pc = 0x1EF218u;
            // 0x1ef218: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1EF21Cu;
        goto label_1ef21c;
    }
    ctx->pc = 0x1EF214u;
    {
        const bool branch_taken_0x1ef214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef214) {
            ctx->pc = 0x1EF218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF214u;
            // 0x1ef218: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF22Cu;
            goto label_1ef22c;
        }
    }
    ctx->pc = 0x1EF21Cu;
label_1ef21c:
    // 0x1ef21c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ef21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1ef220:
    // 0x1ef220: 0x2442f0b8  addiu       $v0, $v0, -0xF48
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963384));
label_1ef224:
    // 0x1ef224: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1ef224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1ef228:
    // 0x1ef228: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef22c:
    // 0x1ef22c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1ef230:
    // 0x1ef230: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef234:
    // 0x1ef234: 0x40f809  jalr        $v0
label_1ef238:
    if (ctx->pc == 0x1EF238u) {
        ctx->pc = 0x1EF238u;
            // 0x1ef238: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1EF23Cu;
        goto label_1ef23c;
    }
    ctx->pc = 0x1EF234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF23Cu);
        ctx->pc = 0x1EF238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF234u;
            // 0x1ef238: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF1A8u: goto label_1ef1a8;
            case 0x1EF1ACu: goto label_1ef1ac;
            case 0x1EF1B0u: goto label_1ef1b0;
            case 0x1EF1B4u: goto label_1ef1b4;
            case 0x1EF1B8u: goto label_1ef1b8;
            case 0x1EF1BCu: goto label_1ef1bc;
            case 0x1EF1C0u: goto label_1ef1c0;
            case 0x1EF1C4u: goto label_1ef1c4;
            case 0x1EF1C8u: goto label_1ef1c8;
            case 0x1EF1CCu: goto label_1ef1cc;
            case 0x1EF1D0u: goto label_1ef1d0;
            case 0x1EF1D4u: goto label_1ef1d4;
            case 0x1EF1D8u: goto label_1ef1d8;
            case 0x1EF1DCu: goto label_1ef1dc;
            case 0x1EF1E0u: goto label_1ef1e0;
            case 0x1EF1E4u: goto label_1ef1e4;
            case 0x1EF1E8u: goto label_1ef1e8;
            case 0x1EF1ECu: goto label_1ef1ec;
            case 0x1EF1F0u: goto label_1ef1f0;
            case 0x1EF1F4u: goto label_1ef1f4;
            case 0x1EF1F8u: goto label_1ef1f8;
            case 0x1EF1FCu: goto label_1ef1fc;
            case 0x1EF200u: goto label_1ef200;
            case 0x1EF204u: goto label_1ef204;
            case 0x1EF208u: goto label_1ef208;
            case 0x1EF20Cu: goto label_1ef20c;
            case 0x1EF210u: goto label_1ef210;
            case 0x1EF214u: goto label_1ef214;
            case 0x1EF218u: goto label_1ef218;
            case 0x1EF21Cu: goto label_1ef21c;
            case 0x1EF220u: goto label_1ef220;
            case 0x1EF224u: goto label_1ef224;
            case 0x1EF228u: goto label_1ef228;
            case 0x1EF22Cu: goto label_1ef22c;
            case 0x1EF230u: goto label_1ef230;
            case 0x1EF234u: goto label_1ef234;
            case 0x1EF238u: goto label_1ef238;
            case 0x1EF23Cu: goto label_1ef23c;
            case 0x1EF240u: goto label_1ef240;
            case 0x1EF244u: goto label_1ef244;
            case 0x1EF248u: goto label_1ef248;
            case 0x1EF24Cu: goto label_1ef24c;
            case 0x1EF250u: goto label_1ef250;
            case 0x1EF254u: goto label_1ef254;
            case 0x1EF258u: goto label_1ef258;
            case 0x1EF25Cu: goto label_1ef25c;
            case 0x1EF260u: goto label_1ef260;
            case 0x1EF264u: goto label_1ef264;
            case 0x1EF268u: goto label_1ef268;
            case 0x1EF26Cu: goto label_1ef26c;
            case 0x1EF270u: goto label_1ef270;
            case 0x1EF274u: goto label_1ef274;
            case 0x1EF278u: goto label_1ef278;
            case 0x1EF27Cu: goto label_1ef27c;
            case 0x1EF280u: goto label_1ef280;
            case 0x1EF284u: goto label_1ef284;
            case 0x1EF288u: goto label_1ef288;
            case 0x1EF28Cu: goto label_1ef28c;
            case 0x1EF290u: goto label_1ef290;
            case 0x1EF294u: goto label_1ef294;
            case 0x1EF298u: goto label_1ef298;
            case 0x1EF29Cu: goto label_1ef29c;
            case 0x1EF2A0u: goto label_1ef2a0;
            case 0x1EF2A4u: goto label_1ef2a4;
            case 0x1EF2A8u: goto label_1ef2a8;
            case 0x1EF2ACu: goto label_1ef2ac;
            case 0x1EF2B0u: goto label_1ef2b0;
            case 0x1EF2B4u: goto label_1ef2b4;
            case 0x1EF2B8u: goto label_1ef2b8;
            case 0x1EF2BCu: goto label_1ef2bc;
            case 0x1EF2C0u: goto label_1ef2c0;
            case 0x1EF2C4u: goto label_1ef2c4;
            case 0x1EF2C8u: goto label_1ef2c8;
            case 0x1EF2CCu: goto label_1ef2cc;
            case 0x1EF2D0u: goto label_1ef2d0;
            case 0x1EF2D4u: goto label_1ef2d4;
            case 0x1EF2D8u: goto label_1ef2d8;
            case 0x1EF2DCu: goto label_1ef2dc;
            case 0x1EF2E0u: goto label_1ef2e0;
            case 0x1EF2E4u: goto label_1ef2e4;
            case 0x1EF2E8u: goto label_1ef2e8;
            case 0x1EF2ECu: goto label_1ef2ec;
            case 0x1EF2F0u: goto label_1ef2f0;
            case 0x1EF2F4u: goto label_1ef2f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF23Cu; }
            if (ctx->pc != 0x1EF23Cu) { return; }
        }
    }
    ctx->pc = 0x1EF23Cu;
label_1ef23c:
    // 0x1ef23c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ef23cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef240:
    // 0x1ef240: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1ef240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1ef244:
    // 0x1ef244: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1ef248:
    if (ctx->pc == 0x1EF248u) {
        ctx->pc = 0x1EF248u;
            // 0x1ef248: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1EF24Cu;
        goto label_1ef24c;
    }
    ctx->pc = 0x1EF244u;
    {
        const bool branch_taken_0x1ef244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF244u;
            // 0x1ef248: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef244) {
            ctx->pc = 0x1EF2E4u;
            goto label_1ef2e4;
        }
    }
    ctx->pc = 0x1EF24Cu;
label_1ef24c:
    // 0x1ef24c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ef250:
    // 0x1ef250: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1ef250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_1ef254:
    // 0x1ef254: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ef258:
    // 0x1ef258: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_1ef25c:
    if (ctx->pc == 0x1EF25Cu) {
        ctx->pc = 0x1EF25Cu;
            // 0x1ef25c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x1EF260u;
        goto label_1ef260;
    }
    ctx->pc = 0x1EF258u;
    {
        const bool branch_taken_0x1ef258 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1EF25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF258u;
            // 0x1ef25c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef258) {
            ctx->pc = 0x1EF270u;
            goto label_1ef270;
        }
    }
    ctx->pc = 0x1EF260u;
label_1ef260:
    // 0x1ef260: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_1ef264:
    // 0x1ef264: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ef268:
    // 0x1ef268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef26c:
    // 0x1ef26c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x1ef26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_1ef270:
    // 0x1ef270: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_1ef274:
    // 0x1ef274: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1ef274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ef278:
    // 0x1ef278: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1ef27c:
    if (ctx->pc == 0x1EF27Cu) {
        ctx->pc = 0x1EF27Cu;
            // 0x1ef27c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1EF280u;
        goto label_1ef280;
    }
    ctx->pc = 0x1EF278u;
    {
        const bool branch_taken_0x1ef278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef278) {
            ctx->pc = 0x1EF27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF278u;
            // 0x1ef27c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF290u;
            goto label_1ef290;
        }
    }
    ctx->pc = 0x1EF280u;
label_1ef280:
    // 0x1ef280: 0xc07bc4e  jal         func_1EF138
label_1ef284:
    if (ctx->pc == 0x1EF284u) {
        ctx->pc = 0x1EF284u;
            // 0x1ef284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF288u;
        goto label_1ef288;
    }
    ctx->pc = 0x1EF280u;
    SET_GPR_U32(ctx, 31, 0x1EF288u);
    ctx->pc = 0x1EF284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF280u;
            // 0x1ef284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF138u;
    if (runtime->hasFunction(0x1EF138u)) {
        auto targetFn = runtime->lookupFunction(0x1EF138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF288u; }
        if (ctx->pc != 0x1EF288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateEnd_0x1ef138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF288u; }
        if (ctx->pc != 0x1EF288u) { return; }
    }
    ctx->pc = 0x1EF288u;
label_1ef288:
    // 0x1ef288: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ef28c:
    if (ctx->pc == 0x1EF28Cu) {
        ctx->pc = 0x1EF28Cu;
            // 0x1ef28c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1EF290u;
        goto label_1ef290;
    }
    ctx->pc = 0x1EF288u;
    {
        const bool branch_taken_0x1ef288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF288u;
            // 0x1ef28c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef288) {
            ctx->pc = 0x1EF2E4u;
            goto label_1ef2e4;
        }
    }
    ctx->pc = 0x1EF290u;
label_1ef290:
    // 0x1ef290: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1ef290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
label_1ef294:
    // 0x1ef294: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ef298:
    // 0x1ef298: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1ef298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1ef29c:
    // 0x1ef29c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1ef2a0:
    if (ctx->pc == 0x1EF2A0u) {
        ctx->pc = 0x1EF2A0u;
            // 0x1ef2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2A4u;
        goto label_1ef2a4;
    }
    ctx->pc = 0x1EF29Cu;
    {
        const bool branch_taken_0x1ef29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef29c) {
            ctx->pc = 0x1EF2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF29Cu;
            // 0x1ef2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF2ACu;
            goto label_1ef2ac;
        }
    }
    ctx->pc = 0x1EF2A4u;
label_1ef2a4:
    // 0x1ef2a4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ef2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1ef2a8:
    // 0x1ef2a8: 0x2445ee10  addiu       $a1, $v0, -0x11F0
    ctx->pc = 0x1ef2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962704));
label_1ef2ac:
    // 0x1ef2ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ef2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef2b0:
    // 0x1ef2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2b4:
    // 0x1ef2b4: 0xc07bed6  jal         func_1EFB58
label_1ef2b8:
    if (ctx->pc == 0x1EF2B8u) {
        ctx->pc = 0x1EF2B8u;
            // 0x1ef2b8: 0x2263004  sllv        $a2, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
        ctx->pc = 0x1EF2BCu;
        goto label_1ef2bc;
    }
    ctx->pc = 0x1EF2B4u;
    SET_GPR_U32(ctx, 31, 0x1EF2BCu);
    ctx->pc = 0x1EF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2B4u;
            // 0x1ef2b8: 0x2263004  sllv        $a2, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB58u;
    if (runtime->hasFunction(0x1EFB58u)) {
        auto targetFn = runtime->lookupFunction(0x1EFB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2BCu; }
        if (ctx->pc != 0x1EF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_new_0x1efb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2BCu; }
        if (ctx->pc != 0x1EF2BCu) { return; }
    }
    ctx->pc = 0x1EF2BCu;
label_1ef2bc:
    // 0x1ef2bc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ef2c0:
    // 0x1ef2c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ef2c4:
    if (ctx->pc == 0x1EF2C4u) {
        ctx->pc = 0x1EF2C4u;
            // 0x1ef2c4: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1EF2C8u;
        goto label_1ef2c8;
    }
    ctx->pc = 0x1EF2C0u;
    {
        const bool branch_taken_0x1ef2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2C0u;
            // 0x1ef2c4: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2c0) {
            ctx->pc = 0x1EF2D8u;
            goto label_1ef2d8;
        }
    }
    ctx->pc = 0x1EF2C8u;
label_1ef2c8:
    // 0x1ef2c8: 0xc07bc4e  jal         func_1EF138
label_1ef2cc:
    if (ctx->pc == 0x1EF2CCu) {
        ctx->pc = 0x1EF2CCu;
            // 0x1ef2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2D0u;
        goto label_1ef2d0;
    }
    ctx->pc = 0x1EF2C8u;
    SET_GPR_U32(ctx, 31, 0x1EF2D0u);
    ctx->pc = 0x1EF2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2C8u;
            // 0x1ef2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF138u;
    if (runtime->hasFunction(0x1EF138u)) {
        auto targetFn = runtime->lookupFunction(0x1EF138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2D0u; }
        if (ctx->pc != 0x1EF2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateEnd_0x1ef138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2D0u; }
        if (ctx->pc != 0x1EF2D0u) { return; }
    }
    ctx->pc = 0x1EF2D0u;
label_1ef2d0:
    // 0x1ef2d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ef2d4:
    if (ctx->pc == 0x1EF2D4u) {
        ctx->pc = 0x1EF2D4u;
            // 0x1ef2d4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1EF2D8u;
        goto label_1ef2d8;
    }
    ctx->pc = 0x1EF2D0u;
    {
        const bool branch_taken_0x1ef2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2D0u;
            // 0x1ef2d4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2d0) {
            ctx->pc = 0x1EF2E4u;
            goto label_1ef2e4;
        }
    }
    ctx->pc = 0x1EF2D8u;
label_1ef2d8:
    // 0x1ef2d8: 0xc07bc36  jal         func_1EF0D8
label_1ef2dc:
    if (ctx->pc == 0x1EF2DCu) {
        ctx->pc = 0x1EF2DCu;
            // 0x1ef2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2E0u;
        goto label_1ef2e0;
    }
    ctx->pc = 0x1EF2D8u;
    SET_GPR_U32(ctx, 31, 0x1EF2E0u);
    ctx->pc = 0x1EF2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2D8u;
            // 0x1ef2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF0D8u;
    if (runtime->hasFunction(0x1EF0D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2E0u; }
        if (ctx->pc != 0x1EF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateReset_0x1ef0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2E0u; }
        if (ctx->pc != 0x1EF2E0u) { return; }
    }
    ctx->pc = 0x1EF2E0u;
label_1ef2e0:
    // 0x1ef2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2e4:
    // 0x1ef2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef2e8:
    // 0x1ef2e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ef2ec:
    // 0x1ef2ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef2f0:
    // 0x1ef2f0: 0x3e00008  jr          $ra
label_1ef2f4:
    if (ctx->pc == 0x1EF2F4u) {
        ctx->pc = 0x1EF2F4u;
            // 0x1ef2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EF2F8u;
        goto label_fallthrough_0x1ef2f0;
    }
    ctx->pc = 0x1EF2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2F0u;
            // 0x1ef2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF1A8u: goto label_1ef1a8;
            case 0x1EF1ACu: goto label_1ef1ac;
            case 0x1EF1B0u: goto label_1ef1b0;
            case 0x1EF1B4u: goto label_1ef1b4;
            case 0x1EF1B8u: goto label_1ef1b8;
            case 0x1EF1BCu: goto label_1ef1bc;
            case 0x1EF1C0u: goto label_1ef1c0;
            case 0x1EF1C4u: goto label_1ef1c4;
            case 0x1EF1C8u: goto label_1ef1c8;
            case 0x1EF1CCu: goto label_1ef1cc;
            case 0x1EF1D0u: goto label_1ef1d0;
            case 0x1EF1D4u: goto label_1ef1d4;
            case 0x1EF1D8u: goto label_1ef1d8;
            case 0x1EF1DCu: goto label_1ef1dc;
            case 0x1EF1E0u: goto label_1ef1e0;
            case 0x1EF1E4u: goto label_1ef1e4;
            case 0x1EF1E8u: goto label_1ef1e8;
            case 0x1EF1ECu: goto label_1ef1ec;
            case 0x1EF1F0u: goto label_1ef1f0;
            case 0x1EF1F4u: goto label_1ef1f4;
            case 0x1EF1F8u: goto label_1ef1f8;
            case 0x1EF1FCu: goto label_1ef1fc;
            case 0x1EF200u: goto label_1ef200;
            case 0x1EF204u: goto label_1ef204;
            case 0x1EF208u: goto label_1ef208;
            case 0x1EF20Cu: goto label_1ef20c;
            case 0x1EF210u: goto label_1ef210;
            case 0x1EF214u: goto label_1ef214;
            case 0x1EF218u: goto label_1ef218;
            case 0x1EF21Cu: goto label_1ef21c;
            case 0x1EF220u: goto label_1ef220;
            case 0x1EF224u: goto label_1ef224;
            case 0x1EF228u: goto label_1ef228;
            case 0x1EF22Cu: goto label_1ef22c;
            case 0x1EF230u: goto label_1ef230;
            case 0x1EF234u: goto label_1ef234;
            case 0x1EF238u: goto label_1ef238;
            case 0x1EF23Cu: goto label_1ef23c;
            case 0x1EF240u: goto label_1ef240;
            case 0x1EF244u: goto label_1ef244;
            case 0x1EF248u: goto label_1ef248;
            case 0x1EF24Cu: goto label_1ef24c;
            case 0x1EF250u: goto label_1ef250;
            case 0x1EF254u: goto label_1ef254;
            case 0x1EF258u: goto label_1ef258;
            case 0x1EF25Cu: goto label_1ef25c;
            case 0x1EF260u: goto label_1ef260;
            case 0x1EF264u: goto label_1ef264;
            case 0x1EF268u: goto label_1ef268;
            case 0x1EF26Cu: goto label_1ef26c;
            case 0x1EF270u: goto label_1ef270;
            case 0x1EF274u: goto label_1ef274;
            case 0x1EF278u: goto label_1ef278;
            case 0x1EF27Cu: goto label_1ef27c;
            case 0x1EF280u: goto label_1ef280;
            case 0x1EF284u: goto label_1ef284;
            case 0x1EF288u: goto label_1ef288;
            case 0x1EF28Cu: goto label_1ef28c;
            case 0x1EF290u: goto label_1ef290;
            case 0x1EF294u: goto label_1ef294;
            case 0x1EF298u: goto label_1ef298;
            case 0x1EF29Cu: goto label_1ef29c;
            case 0x1EF2A0u: goto label_1ef2a0;
            case 0x1EF2A4u: goto label_1ef2a4;
            case 0x1EF2A8u: goto label_1ef2a8;
            case 0x1EF2ACu: goto label_1ef2ac;
            case 0x1EF2B0u: goto label_1ef2b0;
            case 0x1EF2B4u: goto label_1ef2b4;
            case 0x1EF2B8u: goto label_1ef2b8;
            case 0x1EF2BCu: goto label_1ef2bc;
            case 0x1EF2C0u: goto label_1ef2c0;
            case 0x1EF2C4u: goto label_1ef2c4;
            case 0x1EF2C8u: goto label_1ef2c8;
            case 0x1EF2CCu: goto label_1ef2cc;
            case 0x1EF2D0u: goto label_1ef2d0;
            case 0x1EF2D4u: goto label_1ef2d4;
            case 0x1EF2D8u: goto label_1ef2d8;
            case 0x1EF2DCu: goto label_1ef2dc;
            case 0x1EF2E0u: goto label_1ef2e0;
            case 0x1EF2E4u: goto label_1ef2e4;
            case 0x1EF2E8u: goto label_1ef2e8;
            case 0x1EF2ECu: goto label_1ef2ec;
            case 0x1EF2F0u: goto label_1ef2f0;
            case 0x1EF2F4u: goto label_1ef2f4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ef2f0:
    ctx->pc = 0x1EF2F8u;
}
