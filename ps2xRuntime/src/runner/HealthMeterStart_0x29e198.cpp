#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: HealthMeterStart
// Address: 0x29e198 - 0x29e3f0
void HealthMeterStart_0x29e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29e198u;

    // 0x29e198: 0x27bdff20
    ctx->pc = 0x29e198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29e19c: 0xffbf00c0
    ctx->pc = 0x29e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29e1a0: 0xffbe00b0
    ctx->pc = 0x29e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x29e1a4: 0xffb700a0
    ctx->pc = 0x29e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x29e1a8: 0xffb60090
    ctx->pc = 0x29e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x29e1ac: 0xffb50080
    ctx->pc = 0x29e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x29e1b0: 0xffb40070
    ctx->pc = 0x29e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x29e1b4: 0xffb30060
    ctx->pc = 0x29e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x29e1b8: 0xffb20050
    ctx->pc = 0x29e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29e1bc: 0xffb10040
    ctx->pc = 0x29e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x29e1c0: 0xffb00030
    ctx->pc = 0x29e1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29e1c4: 0xe7b400d0
    ctx->pc = 0x29e1c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29e1c8: 0x80902d
    ctx->pc = 0x29e1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1cc: 0xa0982d
    ctx->pc = 0x29e1ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1d0: 0xafa70020
    ctx->pc = 0x29e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x29e1d4: 0xafa80024
    ctx->pc = 0x29e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x29e1d8: 0x3c02003c
    ctx->pc = 0x29e1d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e1dc: 0x8c544178
    ctx->pc = 0x29e1dcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 16760)));
    // 0x29e1e0: 0x2a820003
    ctx->pc = 0x29e1e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 3));
    // 0x29e1e4: 0x14400007
    ctx->pc = 0x29E1E4u;
    {
        const bool branch_taken_0x29e1e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29E1E8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x29e1e4) {
            ctx->pc = 0x29E204u;
            goto label_29e204;
        }
    }
    ctx->pc = 0x29E1ECu;
    // 0x29e1ec: 0x3c04003b
    ctx->pc = 0x29e1ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x29e1f0: 0x2484e448
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960200));
    // 0x29e1f4: 0xc0b492e
    ctx->pc = 0x29E1F4u;
    SET_GPR_U32(ctx, 31, 0x29E1FCu);
    ctx->pc = 0x29E1F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E1FCu; }
    }
    if (ctx->pc != 0x29E1FCu) { return; }
    ctx->pc = 0x29E1FCu;
    // 0x29e1fc: 0x1000006f
    ctx->pc = 0x29E1FCu;
    {
        const bool branch_taken_0x29e1fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29e1fc) {
            ctx->pc = 0x29E3BCu;
            goto label_29e3bc;
        }
    }
    ctx->pc = 0x29E204u;
label_29e204:
    // 0x29e204: 0x3c03003c
    ctx->pc = 0x29e204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x29e208: 0x8c624178
    ctx->pc = 0x29e208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16760)));
    // 0x29e20c: 0x24420001
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x29e210: 0x1120002c
    ctx->pc = 0x29E210u;
    {
        const bool branch_taken_0x29e210 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E214u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 16760), GPR_U32(ctx, 2));
        if (branch_taken_0x29e210) {
            ctx->pc = 0x29E2C4u;
            goto label_29e2c4;
        }
    }
    ctx->pc = 0x29E218u;
    // 0x29e218: 0x3c04003c
    ctx->pc = 0x29e218u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x29e21c: 0x3c03003c
    ctx->pc = 0x29e21cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x29e220: 0x8c624180
    ctx->pc = 0x29e220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16768)));
    // 0x29e224: 0xac82417c
    ctx->pc = 0x29e224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16764), GPR_U32(ctx, 2));
    // 0x29e228: 0xc21021
    ctx->pc = 0x29e228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29e22c: 0xac624180
    ctx->pc = 0x29e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16768), GPR_U32(ctx, 2));
    // 0x29e230: 0x1a600024
    ctx->pc = 0x29E230u;
    {
        const bool branch_taken_0x29e230 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x29E234u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e230) {
            ctx->pc = 0x29E2C4u;
            goto label_29e2c4;
        }
    }
    ctx->pc = 0x29E238u;
    // 0x29e238: 0x3c1e003b
    ctx->pc = 0x29e238u;
    SET_GPR_U32(ctx, 30, ((uint32_t)59 << 16));
    // 0x29e23c: 0x80b82d
    ctx->pc = 0x29e23cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e240: 0x3c02003c
    ctx->pc = 0x29e240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e244: 0x24564188
    ctx->pc = 0x29e244u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 16776));
    // 0x29e248: 0x14a8c0
    ctx->pc = 0x29e248u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 3));
    // 0x29e24c: 0x82420000
    ctx->pc = 0x29e24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_29e250:
    // 0x29e250: 0x10400003
    ctx->pc = 0x29E250u;
    {
        const bool branch_taken_0x29e250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x29e250) {
            ctx->pc = 0x29E260u;
            goto label_29e260;
        }
    }
    ctx->pc = 0x29E258u;
    // 0x29e258: 0x10000002
    ctx->pc = 0x29E258u;
    {
        const bool branch_taken_0x29e258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E25Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294960248));
        if (branch_taken_0x29e258) {
            ctx->pc = 0x29E264u;
            goto label_29e264;
        }
    }
    ctx->pc = 0x29E260u;
label_29e260:
    // 0x29e260: 0x27c7e480
    ctx->pc = 0x29e260u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 30), 4294960256));
label_29e264:
    // 0x29e264: 0x26300001
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 1));
    // 0x29e268: 0x3a0202d
    ctx->pc = 0x29e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e26c: 0x3c05003b
    ctx->pc = 0x29e26cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x29e270: 0x24a5e468
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960232));
    // 0x29e274: 0x240302d
    ctx->pc = 0x29e274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e278: 0xc0b6252
    ctx->pc = 0x29E278u;
    SET_GPR_U32(ctx, 31, 0x29E280u);
    ctx->pc = 0x29E27Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E280u; }
    }
    if (ctx->pc != 0x29E280u) { return; }
    ctx->pc = 0x29E280u;
    // 0x29e280: 0x111200
    ctx->pc = 0x29e280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 8));
    // 0x29e284: 0x8ee5417c
    ctx->pc = 0x29e284u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 16764)));
    // 0x29e288: 0x3a0202d
    ctx->pc = 0x29e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e28c: 0x452821
    ctx->pc = 0x29e28cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29e290: 0xc0b0c08
    ctx->pc = 0x29E290u;
    SET_GPR_U32(ctx, 31, 0x29E298u);
    ctx->pc = 0x29E294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E298u; }
    }
    if (ctx->pc != 0x29E298u) { return; }
    ctx->pc = 0x29E298u;
    // 0x29e298: 0x111880
    ctx->pc = 0x29e298u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x29e29c: 0x751821
    ctx->pc = 0x29e29cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x29e2a0: 0x761821
    ctx->pc = 0x29e2a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29e2a4: 0xac620000
    ctx->pc = 0x29e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29e2a8: 0x40202d
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2ac: 0xc0b0f52
    ctx->pc = 0x29E2ACu;
    SET_GPR_U32(ctx, 31, 0x29E2B4u);
    ctx->pc = 0x29E2B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E2B4u; }
    }
    if (ctx->pc != 0x29E2B4u) { return; }
    ctx->pc = 0x29E2B4u;
    // 0x29e2b4: 0x200882d
    ctx->pc = 0x29e2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2b8: 0x233102a
    ctx->pc = 0x29e2b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x29e2bc: 0x5440ffe4
    ctx->pc = 0x29E2BCu;
    {
        const bool branch_taken_0x29e2bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29e2bc) {
            ctx->pc = 0x29E2C0u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x29E250u;
            goto label_29e250;
        }
    }
    ctx->pc = 0x29E2C4u;
label_29e2c4:
    // 0x29e2c4: 0x1a600025
    ctx->pc = 0x29E2C4u;
    {
        const bool branch_taken_0x29e2c4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x29E2C8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e2c4) {
            ctx->pc = 0x29E35Cu;
            goto label_29e35c;
        }
    }
    ctx->pc = 0x29E2CCu;
    // 0x29e2cc: 0x3c1e003b
    ctx->pc = 0x29e2ccu;
    SET_GPR_U32(ctx, 30, ((uint32_t)59 << 16));
    // 0x29e2d0: 0x3c17003c
    ctx->pc = 0x29e2d0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
    // 0x29e2d4: 0x3c02003c
    ctx->pc = 0x29e2d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e2d8: 0x245641a0
    ctx->pc = 0x29e2d8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e2dc: 0x14a8c0
    ctx->pc = 0x29e2dcu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 3));
    // 0x29e2e0: 0x82420000
    ctx->pc = 0x29e2e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29e2e4: 0x0
    ctx->pc = 0x29e2e4u;
    // NOP
label_29e2e8:
    // 0x29e2e8: 0x10400003
    ctx->pc = 0x29E2E8u;
    {
        const bool branch_taken_0x29e2e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E2ECu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x29e2e8) {
            ctx->pc = 0x29E2F8u;
            goto label_29e2f8;
        }
    }
    ctx->pc = 0x29E2F0u;
    // 0x29e2f0: 0x10000002
    ctx->pc = 0x29E2F0u;
    {
        const bool branch_taken_0x29e2f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E2F4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4294960248));
        if (branch_taken_0x29e2f0) {
            ctx->pc = 0x29E2FCu;
            goto label_29e2fc;
        }
    }
    ctx->pc = 0x29E2F8u;
label_29e2f8:
    // 0x29e2f8: 0x27c7e480
    ctx->pc = 0x29e2f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 30), 4294960256));
label_29e2fc:
    // 0x29e2fc: 0x26300001
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 1));
    // 0x29e300: 0x3a0202d
    ctx->pc = 0x29e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e304: 0x3c05003b
    ctx->pc = 0x29e304u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x29e308: 0x24a5e488
    ctx->pc = 0x29e308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960264));
    // 0x29e30c: 0x240302d
    ctx->pc = 0x29e30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e310: 0xc0b6252
    ctx->pc = 0x29E310u;
    SET_GPR_U32(ctx, 31, 0x29E318u);
    ctx->pc = 0x29E314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E318u; }
    }
    if (ctx->pc != 0x29E318u) { return; }
    ctx->pc = 0x29E318u;
    // 0x29e318: 0x111200
    ctx->pc = 0x29e318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 8));
    // 0x29e31c: 0x8ee5417c
    ctx->pc = 0x29e31cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 16764)));
    // 0x29e320: 0x3a0202d
    ctx->pc = 0x29e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e324: 0x452821
    ctx->pc = 0x29e324u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29e328: 0xc0b0c08
    ctx->pc = 0x29E328u;
    SET_GPR_U32(ctx, 31, 0x29E330u);
    ctx->pc = 0x29E32Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E330u; }
    }
    if (ctx->pc != 0x29E330u) { return; }
    ctx->pc = 0x29E330u;
    // 0x29e330: 0x111880
    ctx->pc = 0x29e330u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x29e334: 0x751821
    ctx->pc = 0x29e334u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x29e338: 0x761821
    ctx->pc = 0x29e338u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29e33c: 0xac620000
    ctx->pc = 0x29e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29e340: 0x40202d
    ctx->pc = 0x29e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e344: 0xc0b0f52
    ctx->pc = 0x29E344u;
    SET_GPR_U32(ctx, 31, 0x29E34Cu);
    ctx->pc = 0x29E348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E34Cu; }
    }
    if (ctx->pc != 0x29E34Cu) { return; }
    ctx->pc = 0x29E34Cu;
    // 0x29e34c: 0x200882d
    ctx->pc = 0x29e34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e350: 0x233102a
    ctx->pc = 0x29e350u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x29e354: 0x5440ffe4
    ctx->pc = 0x29E354u;
    {
        const bool branch_taken_0x29e354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29e354) {
            ctx->pc = 0x29E358u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x29E2E8u;
            goto label_29e2e8;
        }
    }
    ctx->pc = 0x29E35Cu;
label_29e35c:
    // 0x29e35c: 0x3c02003c
    ctx->pc = 0x29e35cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e360: 0x244241b8
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16824));
    // 0x29e364: 0x141880
    ctx->pc = 0x29e364u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x29e368: 0x621021
    ctx->pc = 0x29e368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e36c: 0xac530000
    ctx->pc = 0x29e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x29e370: 0x3c02003c
    ctx->pc = 0x29e370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e374: 0x244241d8
    ctx->pc = 0x29e374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16856));
    // 0x29e378: 0x621021
    ctx->pc = 0x29e378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e37c: 0xe4540000
    ctx->pc = 0x29e37cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e380: 0x3c02003c
    ctx->pc = 0x29e380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e384: 0x244241c8
    ctx->pc = 0x29e384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16840));
    // 0x29e388: 0x621021
    ctx->pc = 0x29e388u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e38c: 0xe4540000
    ctx->pc = 0x29e38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e390: 0x3c02003c
    ctx->pc = 0x29e390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e394: 0x244241e8
    ctx->pc = 0x29e394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16872));
    // 0x29e398: 0x621021
    ctx->pc = 0x29e398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e39c: 0x8fa40020
    ctx->pc = 0x29e39cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e3a0: 0xac440000
    ctx->pc = 0x29e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e3a4: 0x3c02003c
    ctx->pc = 0x29e3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e3a8: 0x244241f8
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16888));
    // 0x29e3ac: 0x621821
    ctx->pc = 0x29e3acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e3b0: 0x8fa20024
    ctx->pc = 0x29e3b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x29e3b4: 0xac620000
    ctx->pc = 0x29e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29e3b8: 0x280102d
    ctx->pc = 0x29e3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e3bc:
    // 0x29e3bc: 0xdfbf00c0
    ctx->pc = 0x29e3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29e3c0: 0xdfbe00b0
    ctx->pc = 0x29e3c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29e3c4: 0xdfb700a0
    ctx->pc = 0x29e3c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e3c8: 0xdfb60090
    ctx->pc = 0x29e3c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e3cc: 0xdfb50080
    ctx->pc = 0x29e3ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e3d0: 0xdfb40070
    ctx->pc = 0x29e3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e3d4: 0xdfb30060
    ctx->pc = 0x29e3d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e3d8: 0xdfb20050
    ctx->pc = 0x29e3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e3dc: 0xdfb10040
    ctx->pc = 0x29e3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e3e0: 0xdfb00030
    ctx->pc = 0x29e3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e3e4: 0xc7b400d0
    ctx->pc = 0x29e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29e3e8: 0x3e00008
    ctx->pc = 0x29E3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E3ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E204u: goto label_29e204;
            case 0x29E250u: goto label_29e250;
            case 0x29E260u: goto label_29e260;
            case 0x29E264u: goto label_29e264;
            case 0x29E2C4u: goto label_29e2c4;
            case 0x29E2E8u: goto label_29e2e8;
            case 0x29E2F8u: goto label_29e2f8;
            case 0x29E2FCu: goto label_29e2fc;
            case 0x29E35Cu: goto label_29e35c;
            case 0x29E3BCu: goto label_29e3bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29E3F0u;
}
