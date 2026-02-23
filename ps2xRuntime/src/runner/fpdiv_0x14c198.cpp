#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fpdiv
// Address: 0x14c198 - 0x14c2f8
void fpdiv_0x14c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fpdiv");


    ctx->pc = 0x14c198u;

    // 0x14c198: 0x27bdffb0
    ctx->pc = 0x14c198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14c19c: 0xffb00030
    ctx->pc = 0x14c19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x14c1a0: 0x27a40020
    ctx->pc = 0x14c1a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14c1a4: 0xffbf0040
    ctx->pc = 0x14c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14c1a8: 0x3a0282d
    ctx->pc = 0x14c1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1ac: 0xe7ac0020
    ctx->pc = 0x14c1acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14c1b0: 0xc052f06
    ctx->pc = 0x14C1B0u;
    SET_GPR_U32(ctx, 31, 0x14C1B8u);
    ctx->pc = 0x14C1B4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1B8u; }
        else if (ctx->pc != 0x14C1B8u) { ctx->pc = 0x14C1B8u; }
    }
    if (ctx->pc != 0x14C1B8u) { return; }
    ctx->pc = 0x14C1B8u;
    // 0x14c1b8: 0x27b00010
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c1bc: 0x27a40024
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 36));
    // 0x14c1c0: 0xc052f06
    ctx->pc = 0x14C1C0u;
    SET_GPR_U32(ctx, 31, 0x14C1C8u);
    ctx->pc = 0x14C1C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1C8u; }
        else if (ctx->pc != 0x14C1C8u) { ctx->pc = 0x14C1C8u; }
    }
    if (ctx->pc != 0x14C1C8u) { return; }
    ctx->pc = 0x14C1C8u;
    // 0x14c1c8: 0x8fa70000
    ctx->pc = 0x14c1c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c1cc: 0x2ce20002
    ctx->pc = 0x14c1ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 2));
    // 0x14c1d0: 0x10400003
    ctx->pc = 0x14C1D0u;
    {
        const bool branch_taken_0x14c1d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C1D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c1d0) {
            ctx->pc = 0x14C1E0u;
            goto label_14c1e0;
        }
    }
    ctx->pc = 0x14C1D8u;
    // 0x14c1d8: 0x10000041
    ctx->pc = 0x14C1D8u;
    {
        const bool branch_taken_0x14c1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C1DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c1d8) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C1E0u;
label_14c1e0:
    // 0x14c1e0: 0x8fa60010
    ctx->pc = 0x14c1e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c1e4: 0x2cc20002
    ctx->pc = 0x14c1e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x14c1e8: 0x1440003d
    ctx->pc = 0x14C1E8u;
    {
        const bool branch_taken_0x14c1e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C1ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c1e8) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C1F0u;
    // 0x14c1f0: 0x8fa20004
    ctx->pc = 0x14c1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c1f4: 0x38e40004
    ctx->pc = 0x14c1f4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 7), 4));
    // 0x14c1f8: 0x8fa30014
    ctx->pc = 0x14c1f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14c1fc: 0x431026
    ctx->pc = 0x14c1fcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c200: 0x10800004
    ctx->pc = 0x14C200u;
    {
        const bool branch_taken_0x14c200 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C204u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14c200) {
            ctx->pc = 0x14C214u;
            goto label_14c214;
        }
    }
    ctx->pc = 0x14C208u;
    // 0x14c208: 0x38e20002
    ctx->pc = 0x14c208u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 2));
    // 0x14c20c: 0x14400006
    ctx->pc = 0x14C20Cu;
    {
        const bool branch_taken_0x14c20c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C210u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x14c20c) {
            ctx->pc = 0x14C228u;
            goto label_14c228;
        }
    }
    ctx->pc = 0x14C214u;
label_14c214:
    // 0x14c214: 0x14e60032
    ctx->pc = 0x14C214u;
    {
        const bool branch_taken_0x14c214 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x14C218u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c214) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C21Cu;
    // 0x14c21c: 0x3c02002d
    ctx->pc = 0x14c21cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14c220: 0x1000002f
    ctx->pc = 0x14C220u;
    {
        const bool branch_taken_0x14c220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C224u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26880));
        if (branch_taken_0x14c220) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C228u;
label_14c228:
    // 0x14c228: 0x14400005
    ctx->pc = 0x14C228u;
    {
        const bool branch_taken_0x14c228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C22Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x14c228) {
            ctx->pc = 0x14C240u;
            goto label_14c240;
        }
    }
    ctx->pc = 0x14C230u;
    // 0x14c230: 0xafa0000c
    ctx->pc = 0x14c230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x14c234: 0x3a0202d
    ctx->pc = 0x14c234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c238: 0x10000029
    ctx->pc = 0x14C238u;
    {
        const bool branch_taken_0x14c238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C23Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x14c238) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C240u;
label_14c240:
    // 0x14c240: 0x14400005
    ctx->pc = 0x14C240u;
    {
        const bool branch_taken_0x14c240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C244u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14c240) {
            ctx->pc = 0x14C258u;
            goto label_14c258;
        }
    }
    ctx->pc = 0x14C248u;
    // 0x14c248: 0x24020004
    ctx->pc = 0x14c248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c24c: 0x3a0202d
    ctx->pc = 0x14c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c250: 0x10000023
    ctx->pc = 0x14C250u;
    {
        const bool branch_taken_0x14c250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C254u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14c250) {
            ctx->pc = 0x14C2E0u;
            goto label_14c2e0;
        }
    }
    ctx->pc = 0x14C258u;
label_14c258:
    // 0x14c258: 0x8fa20018
    ctx->pc = 0x14c258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c25c: 0x8fa4000c
    ctx->pc = 0x14c25cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c260: 0x8fa8001c
    ctx->pc = 0x14c260u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x14c264: 0x621023
    ctx->pc = 0x14c264u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c268: 0x88302b
    ctx->pc = 0x14c268u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x14c26c: 0x10c00005
    ctx->pc = 0x14C26Cu;
    {
        const bool branch_taken_0x14c26c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C270u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x14c26c) {
            ctx->pc = 0x14C284u;
            goto label_14c284;
        }
    }
    ctx->pc = 0x14C274u;
    // 0x14c274: 0x2442ffff
    ctx->pc = 0x14c274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14c278: 0x42040
    ctx->pc = 0x14c278u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x14c27c: 0xafa20008
    ctx->pc = 0x14c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x14c280: 0x88302b
    ctx->pc = 0x14c280u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_14c284:
    // 0x14c284: 0x3c024000
    ctx->pc = 0x14c284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x14c288: 0x10000002
    ctx->pc = 0x14C288u;
    {
        const bool branch_taken_0x14c288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C28Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c288) {
            ctx->pc = 0x14C294u;
            goto label_14c294;
        }
    }
    ctx->pc = 0x14C290u;
label_14c290:
    // 0x14c290: 0x88302b
    ctx->pc = 0x14c290u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_14c294:
    // 0x14c294: 0x54c00004
    ctx->pc = 0x14C294u;
    {
        const bool branch_taken_0x14c294 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x14c294) {
            ctx->pc = 0x14C298u;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x14C2A8u;
            goto label_14c2a8;
        }
    }
    ctx->pc = 0x14C29Cu;
    // 0x14c29c: 0xe23825
    ctx->pc = 0x14c29cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14c2a0: 0x882023
    ctx->pc = 0x14c2a0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x14c2a4: 0x21042
    ctx->pc = 0x14c2a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_14c2a8:
    // 0x14c2a8: 0x1440fff9
    ctx->pc = 0x14C2A8u;
    {
        const bool branch_taken_0x14c2a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C2ACu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x14c2a8) {
            ctx->pc = 0x14C290u;
            goto label_14c290;
        }
    }
    ctx->pc = 0x14C2B0u;
    // 0x14c2b0: 0x30e3007f
    ctx->pc = 0x14c2b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 127));
    // 0x14c2b4: 0x24020040
    ctx->pc = 0x14c2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x14c2b8: 0x54620008
    ctx->pc = 0x14C2B8u;
    {
        const bool branch_taken_0x14c2b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x14c2b8) {
            ctx->pc = 0x14C2BCu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->pc = 0x14C2DCu;
            goto label_14c2dc;
        }
    }
    ctx->pc = 0x14C2C0u;
    // 0x14c2c0: 0x30e20080
    ctx->pc = 0x14c2c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 128));
    // 0x14c2c4: 0x10400003
    ctx->pc = 0x14C2C4u;
    {
        const bool branch_taken_0x14c2c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C2C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 64));
        if (branch_taken_0x14c2c4) {
            ctx->pc = 0x14C2D4u;
            goto label_14c2d4;
        }
    }
    ctx->pc = 0x14C2CCu;
    // 0x14c2cc: 0x10000002
    ctx->pc = 0x14C2CCu;
    {
        const bool branch_taken_0x14c2cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C2D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
        if (branch_taken_0x14c2cc) {
            ctx->pc = 0x14C2D8u;
            goto label_14c2d8;
        }
    }
    ctx->pc = 0x14C2D4u;
label_14c2d4:
    // 0x14c2d4: 0x44380b
    ctx->pc = 0x14c2d4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_14c2d8:
    // 0x14c2d8: 0xaca7000c
    ctx->pc = 0x14c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_14c2dc:
    // 0x14c2dc: 0xa0202d
    ctx->pc = 0x14c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14c2e0:
    // 0x14c2e0: 0xc052ec2
    ctx->pc = 0x14C2E0u;
    SET_GPR_U32(ctx, 31, 0x14C2E8u);
    ctx->pc = 0x14BB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x14bb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2E8u; }
        else if (ctx->pc != 0x14C2E8u) { ctx->pc = 0x14C2E8u; }
    }
    if (ctx->pc != 0x14C2E8u) { return; }
    ctx->pc = 0x14C2E8u;
    // 0x14c2e8: 0xdfbf0040
    ctx->pc = 0x14c2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c2ec: 0xdfb00030
    ctx->pc = 0x14c2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c2f0: 0x3e00008
    ctx->pc = 0x14C2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C2F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C1E0u: goto label_14c1e0;
            case 0x14C214u: goto label_14c214;
            case 0x14C228u: goto label_14c228;
            case 0x14C240u: goto label_14c240;
            case 0x14C258u: goto label_14c258;
            case 0x14C284u: goto label_14c284;
            case 0x14C290u: goto label_14c290;
            case 0x14C294u: goto label_14c294;
            case 0x14C2A8u: goto label_14c2a8;
            case 0x14C2D4u: goto label_14c2d4;
            case 0x14C2D8u: goto label_14c2d8;
            case 0x14C2DCu: goto label_14c2dc;
            case 0x14C2E0u: goto label_14c2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C2F8u;
}
