#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setChrome
// Address: 0x2bf1b8 - 0x2bf944
void setChrome_0x2bf1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bf1b8u;

    // 0x2bf1b8: 0x27bdfee0
    ctx->pc = 0x2bf1b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2bf1bc: 0xffbf0110
    ctx->pc = 0x2bf1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2bf1c0: 0xffb60100
    ctx->pc = 0x2bf1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x2bf1c4: 0xffb500f0
    ctx->pc = 0x2bf1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x2bf1c8: 0xffb400e0
    ctx->pc = 0x2bf1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2bf1cc: 0xffb300d0
    ctx->pc = 0x2bf1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x2bf1d0: 0xffb200c0
    ctx->pc = 0x2bf1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2bf1d4: 0xffb100b0
    ctx->pc = 0x2bf1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x2bf1d8: 0xffb000a0
    ctx->pc = 0x2bf1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2bf1dc: 0x80902d
    ctx->pc = 0x2bf1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1e0: 0xa0a02d
    ctx->pc = 0x2bf1e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1e4: 0xe0b02d
    ctx->pc = 0x2bf1e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1e8: 0x3c020036
    ctx->pc = 0x2bf1e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bf1ec: 0x8c55dee0
    ctx->pc = 0x2bf1ecu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bf1f0: 0x982d
    ctx->pc = 0x2bf1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1f4: 0x3a0202d
    ctx->pc = 0x2bf1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1f8: 0xc0b9534
    ctx->pc = 0x2BF1F8u;
    SET_GPR_U32(ctx, 31, 0x2BF200u);
    ctx->pc = 0x2BF1FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E54D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InversMatrix_0x2e54d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF200u; }
    }
    if (ctx->pc != 0x2BF200u) { return; }
    ctx->pc = 0x2BF200u;
    // 0x2bf200: 0x3c020037
    ctx->pc = 0x2bf200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bf204: 0x8c432888
    ctx->pc = 0x2bf204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf208: 0x8c62003c
    ctx->pc = 0x2bf208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2bf20c: 0x1040000f
    ctx->pc = 0x2BF20Cu;
    {
        const bool branch_taken_0x2bf20c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF210u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf20c) {
            ctx->pc = 0x2BF24Cu;
            goto label_2bf24c;
        }
    }
    ctx->pc = 0x2BF214u;
    // 0x2bf214: 0x8c620044
    ctx->pc = 0x2bf214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2bf218: 0x24420001
    ctx->pc = 0x2bf218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf21c: 0xac620044
    ctx->pc = 0x2bf21cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x2bf220: 0x28420015
    ctx->pc = 0x2bf220u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 21));
    // 0x2bf224: 0x1440000d
    ctx->pc = 0x2BF224u;
    {
        const bool branch_taken_0x2bf224 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BF228u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf224) {
            ctx->pc = 0x2BF25Cu;
            goto label_2bf25c;
        }
    }
    ctx->pc = 0x2BF22Cu;
    // 0x2bf22c: 0xac600044
    ctx->pc = 0x2bf22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x2bf230: 0x8c730040
    ctx->pc = 0x2bf230u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bf234: 0x12600009
    ctx->pc = 0x2BF234u;
    {
        const bool branch_taken_0x2bf234 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF238u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bf234) {
            ctx->pc = 0x2BF25Cu;
            goto label_2bf25c;
        }
    }
    ctx->pc = 0x2BF23Cu;
    // 0x2bf23c: 0xc0b4a34
    ctx->pc = 0x2BF23Cu;
    SET_GPR_U32(ctx, 31, 0x2BF244u);
    ctx->pc = 0x2BF240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27512));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF244u; }
    }
    if (ctx->pc != 0x2BF244u) { return; }
    ctx->pc = 0x2BF244u;
    // 0x2bf244: 0x10000005
    ctx->pc = 0x2BF244u;
    {
        const bool branch_taken_0x2bf244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF248u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf244) {
            ctx->pc = 0x2BF25Cu;
            goto label_2bf25c;
        }
    }
    ctx->pc = 0x2BF24Cu;
label_2bf24c:
    // 0x2bf24c: 0x8c432888
    ctx->pc = 0x2bf24cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf250: 0x24020001
    ctx->pc = 0x2bf250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf254: 0xac620044
    ctx->pc = 0x2bf254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x2bf258: 0x3c020037
    ctx->pc = 0x2bf258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bf25c:
    // 0x2bf25c: 0x8c422888
    ctx->pc = 0x2bf25cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf260: 0x8c42001c
    ctx->pc = 0x2bf260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bf264: 0x10400046
    ctx->pc = 0x2BF264u;
    {
        const bool branch_taken_0x2bf264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF268u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x2bf264) {
            ctx->pc = 0x2BF380u;
            goto label_2bf380;
        }
    }
    ctx->pc = 0x2BF26Cu;
    // 0x2bf26c: 0x8ea50004
    ctx->pc = 0x2bf26cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf270: 0x200202d
    ctx->pc = 0x2bf270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf274: 0x24a50020
    ctx->pc = 0x2bf274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bf278: 0xc0b9570
    ctx->pc = 0x2BF278u;
    SET_GPR_U32(ctx, 31, 0x2BF280u);
    ctx->pc = 0x2BF27Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 48));
    ctx->pc = 0x2E55C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x2e55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF280u; }
    }
    if (ctx->pc != 0x2BF280u) { return; }
    ctx->pc = 0x2BF280u;
    // 0x2bf280: 0x27b10050
    ctx->pc = 0x2bf280u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bf284: 0x8ea60004
    ctx->pc = 0x2bf284u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf288: 0x220202d
    ctx->pc = 0x2bf288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf28c: 0x200282d
    ctx->pc = 0x2bf28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf290: 0xc0b9502
    ctx->pc = 0x2BF290u;
    SET_GPR_U32(ctx, 31, 0x2BF298u);
    ctx->pc = 0x2BF294u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    ctx->pc = 0x2E5408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x2e5408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF298u; }
    }
    if (ctx->pc != 0x2BF298u) { return; }
    ctx->pc = 0x2BF298u;
    // 0x2bf298: 0x27a40060
    ctx->pc = 0x2bf298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf29c: 0x220282d
    ctx->pc = 0x2bf29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2a0: 0xc0b9502
    ctx->pc = 0x2BF2A0u;
    SET_GPR_U32(ctx, 31, 0x2BF2A8u);
    ctx->pc = 0x2BF2A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x2e5408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2A8u; }
    }
    if (ctx->pc != 0x2BF2A8u) { return; }
    ctx->pc = 0x2BF2A8u;
    // 0x2bf2a8: 0x12600079
    ctx->pc = 0x2BF2A8u;
    {
        const bool branch_taken_0x2bf2a8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF2ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x2bf2a8) {
            ctx->pc = 0x2BF490u;
            goto label_2bf490;
        }
    }
    ctx->pc = 0x2BF2B0u;
    // 0x2bf2b0: 0x10400010
    ctx->pc = 0x2BF2B0u;
    {
        const bool branch_taken_0x2bf2b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF2B4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 64));
        if (branch_taken_0x2bf2b0) {
            ctx->pc = 0x2BF2F4u;
            goto label_2bf2f4;
        }
    }
    ctx->pc = 0x2BF2B8u;
    // 0x2bf2b8: 0xc0be862
    ctx->pc = 0x2BF2B8u;
    SET_GPR_U32(ctx, 31, 0x2BF2C0u);
    ctx->pc = 0x2BF2BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2C0u; }
    }
    if (ctx->pc != 0x2BF2C0u) { return; }
    ctx->pc = 0x2BF2C0u;
    // 0x2bf2c0: 0x40882d
    ctx->pc = 0x2bf2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2c4: 0xc0be862
    ctx->pc = 0x2BF2C4u;
    SET_GPR_U32(ctx, 31, 0x2BF2CCu);
    ctx->pc = 0x2BF2C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2CCu; }
    }
    if (ctx->pc != 0x2BF2CCu) { return; }
    ctx->pc = 0x2BF2CCu;
    // 0x2bf2cc: 0x40802d
    ctx->pc = 0x2bf2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2d0: 0xc0be862
    ctx->pc = 0x2BF2D0u;
    SET_GPR_U32(ctx, 31, 0x2BF2D8u);
    ctx->pc = 0x2BF2D4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2D8u; }
    }
    if (ctx->pc != 0x2BF2D8u) { return; }
    ctx->pc = 0x2BF2D8u;
    // 0x2bf2d8: 0x3c04003b
    ctx->pc = 0x2bf2d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf2dc: 0x24846b80
    ctx->pc = 0x2bf2dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27520));
    // 0x2bf2e0: 0x220282d
    ctx->pc = 0x2bf2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2e4: 0x200302d
    ctx->pc = 0x2bf2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2e8: 0xc0b4a34
    ctx->pc = 0x2BF2E8u;
    SET_GPR_U32(ctx, 31, 0x2BF2F0u);
    ctx->pc = 0x2BF2ECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2F0u; }
    }
    if (ctx->pc != 0x2BF2F0u) { return; }
    ctx->pc = 0x2BF2F0u;
    // 0x2bf2f0: 0x32620040
    ctx->pc = 0x2bf2f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 64));
label_2bf2f4:
    // 0x2bf2f4: 0x10400010
    ctx->pc = 0x2BF2F4u;
    {
        const bool branch_taken_0x2bf2f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF2F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x2bf2f4) {
            ctx->pc = 0x2BF338u;
            goto label_2bf338;
        }
    }
    ctx->pc = 0x2BF2FCu;
    // 0x2bf2fc: 0xc0be862
    ctx->pc = 0x2BF2FCu;
    SET_GPR_U32(ctx, 31, 0x2BF304u);
    ctx->pc = 0x2BF300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF304u; }
    }
    if (ctx->pc != 0x2BF304u) { return; }
    ctx->pc = 0x2BF304u;
    // 0x2bf304: 0x40882d
    ctx->pc = 0x2bf304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf308: 0xc0be862
    ctx->pc = 0x2BF308u;
    SET_GPR_U32(ctx, 31, 0x2BF310u);
    ctx->pc = 0x2BF30Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF310u; }
    }
    if (ctx->pc != 0x2BF310u) { return; }
    ctx->pc = 0x2BF310u;
    // 0x2bf310: 0x40802d
    ctx->pc = 0x2bf310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf314: 0xc0be862
    ctx->pc = 0x2BF314u;
    SET_GPR_U32(ctx, 31, 0x2BF31Cu);
    ctx->pc = 0x2BF318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF31Cu; }
    }
    if (ctx->pc != 0x2BF31Cu) { return; }
    ctx->pc = 0x2BF31Cu;
    // 0x2bf31c: 0x3c04003b
    ctx->pc = 0x2bf31cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf320: 0x24846ba0
    ctx->pc = 0x2bf320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27552));
    // 0x2bf324: 0x220282d
    ctx->pc = 0x2bf324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf328: 0x200302d
    ctx->pc = 0x2bf328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf32c: 0xc0b4a34
    ctx->pc = 0x2BF32Cu;
    SET_GPR_U32(ctx, 31, 0x2BF334u);
    ctx->pc = 0x2BF330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF334u; }
    }
    if (ctx->pc != 0x2BF334u) { return; }
    ctx->pc = 0x2BF334u;
    // 0x2bf334: 0x32620002
    ctx->pc = 0x2bf334u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
label_2bf338:
    // 0x2bf338: 0x10400056
    ctx->pc = 0x2BF338u;
    {
        const bool branch_taken_0x2bf338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF33Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf338) {
            ctx->pc = 0x2BF494u;
            goto label_2bf494;
        }
    }
    ctx->pc = 0x2BF340u;
    // 0x2bf340: 0xc0be862
    ctx->pc = 0x2BF340u;
    SET_GPR_U32(ctx, 31, 0x2BF348u);
    ctx->pc = 0x2BF344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF348u; }
    }
    if (ctx->pc != 0x2BF348u) { return; }
    ctx->pc = 0x2BF348u;
    // 0x2bf348: 0x40882d
    ctx->pc = 0x2bf348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf34c: 0xc0be862
    ctx->pc = 0x2BF34Cu;
    SET_GPR_U32(ctx, 31, 0x2BF354u);
    ctx->pc = 0x2BF350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF354u; }
    }
    if (ctx->pc != 0x2BF354u) { return; }
    ctx->pc = 0x2BF354u;
    // 0x2bf354: 0x40802d
    ctx->pc = 0x2bf354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf358: 0xc0be862
    ctx->pc = 0x2BF358u;
    SET_GPR_U32(ctx, 31, 0x2BF360u);
    ctx->pc = 0x2BF35Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF360u; }
    }
    if (ctx->pc != 0x2BF360u) { return; }
    ctx->pc = 0x2BF360u;
    // 0x2bf360: 0x3c04003b
    ctx->pc = 0x2bf360u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf364: 0x24846bc0
    ctx->pc = 0x2bf364u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27584));
    // 0x2bf368: 0x220282d
    ctx->pc = 0x2bf368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf36c: 0x200302d
    ctx->pc = 0x2bf36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf370: 0xc0b4a34
    ctx->pc = 0x2BF370u;
    SET_GPR_U32(ctx, 31, 0x2BF378u);
    ctx->pc = 0x2BF374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF378u; }
    }
    if (ctx->pc != 0x2BF378u) { return; }
    ctx->pc = 0x2BF378u;
    // 0x2bf378: 0x10000046
    ctx->pc = 0x2BF378u;
    {
        const bool branch_taken_0x2bf378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF37Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf378) {
            ctx->pc = 0x2BF494u;
            goto label_2bf494;
        }
    }
    ctx->pc = 0x2BF380u;
label_2bf380:
    // 0x2bf380: 0x3c013f80
    ctx->pc = 0x2bf380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2bf384: 0x44810000
    ctx->pc = 0x2bf384u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bf388: 0xe7a00050
    ctx->pc = 0x2bf388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bf38c: 0xafa00054
    ctx->pc = 0x2bf38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bf390: 0xafa00058
    ctx->pc = 0x2bf390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2bf394: 0xafa00060
    ctx->pc = 0x2bf394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2bf398: 0xe7a00064
    ctx->pc = 0x2bf398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bf39c: 0xafa00068
    ctx->pc = 0x2bf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2bf3a0: 0x3c020037
    ctx->pc = 0x2bf3a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bf3a4: 0x8c422888
    ctx->pc = 0x2bf3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf3a8: 0x8c420020
    ctx->pc = 0x2bf3a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf3ac: 0x1040000c
    ctx->pc = 0x2BF3ACu;
    {
        const bool branch_taken_0x2bf3ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF3B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x2bf3ac) {
            ctx->pc = 0x2BF3E0u;
            goto label_2bf3e0;
        }
    }
    ctx->pc = 0x2BF3B4u;
    // 0x2bf3b4: 0x8ea60004
    ctx->pc = 0x2bf3b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf3b8: 0xa0202d
    ctx->pc = 0x2bf3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf3bc: 0xc0b6278
    ctx->pc = 0x2BF3BCu;
    SET_GPR_U32(ctx, 31, 0x2BF3C4u);
    ctx->pc = 0x2BF3C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 592));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3C4u; }
    }
    if (ctx->pc != 0x2BF3C4u) { return; }
    ctx->pc = 0x2BF3C4u;
    // 0x2bf3c4: 0x27a50060
    ctx->pc = 0x2bf3c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf3c8: 0x8ea60004
    ctx->pc = 0x2bf3c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf3cc: 0xa0202d
    ctx->pc = 0x2bf3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf3d0: 0xc0b6278
    ctx->pc = 0x2BF3D0u;
    SET_GPR_U32(ctx, 31, 0x2BF3D8u);
    ctx->pc = 0x2BF3D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 592));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3D8u; }
    }
    if (ctx->pc != 0x2BF3D8u) { return; }
    ctx->pc = 0x2BF3D8u;
    // 0x2bf3d8: 0x1000000a
    ctx->pc = 0x2BF3D8u;
    {
        const bool branch_taken_0x2bf3d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bf3d8) {
            ctx->pc = 0x2BF404u;
            goto label_2bf404;
        }
    }
    ctx->pc = 0x2BF3E0u;
label_2bf3e0:
    // 0x2bf3e0: 0x8ea60004
    ctx->pc = 0x2bf3e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf3e4: 0xa0202d
    ctx->pc = 0x2bf3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf3e8: 0xc0b6278
    ctx->pc = 0x2BF3E8u;
    SET_GPR_U32(ctx, 31, 0x2BF3F0u);
    ctx->pc = 0x2BF3ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 528));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3F0u; }
    }
    if (ctx->pc != 0x2BF3F0u) { return; }
    ctx->pc = 0x2BF3F0u;
    // 0x2bf3f0: 0x27a50060
    ctx->pc = 0x2bf3f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf3f4: 0x8ea60004
    ctx->pc = 0x2bf3f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf3f8: 0xa0202d
    ctx->pc = 0x2bf3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf3fc: 0xc0b6278
    ctx->pc = 0x2BF3FCu;
    SET_GPR_U32(ctx, 31, 0x2BF404u);
    ctx->pc = 0x2BF400u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 528));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF404u; }
    }
    if (ctx->pc != 0x2BF404u) { return; }
    ctx->pc = 0x2BF404u;
label_2bf404:
    // 0x2bf404: 0x12600022
    ctx->pc = 0x2BF404u;
    {
        const bool branch_taken_0x2bf404 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF408u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 128));
        if (branch_taken_0x2bf404) {
            ctx->pc = 0x2BF490u;
            goto label_2bf490;
        }
    }
    ctx->pc = 0x2BF40Cu;
    // 0x2bf40c: 0x10400010
    ctx->pc = 0x2BF40Cu;
    {
        const bool branch_taken_0x2bf40c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF410u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x2bf40c) {
            ctx->pc = 0x2BF450u;
            goto label_2bf450;
        }
    }
    ctx->pc = 0x2BF414u;
    // 0x2bf414: 0xc0be862
    ctx->pc = 0x2BF414u;
    SET_GPR_U32(ctx, 31, 0x2BF41Cu);
    ctx->pc = 0x2BF418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF41Cu; }
    }
    if (ctx->pc != 0x2BF41Cu) { return; }
    ctx->pc = 0x2BF41Cu;
    // 0x2bf41c: 0x40882d
    ctx->pc = 0x2bf41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf420: 0xc0be862
    ctx->pc = 0x2BF420u;
    SET_GPR_U32(ctx, 31, 0x2BF428u);
    ctx->pc = 0x2BF424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF428u; }
    }
    if (ctx->pc != 0x2BF428u) { return; }
    ctx->pc = 0x2BF428u;
    // 0x2bf428: 0x40802d
    ctx->pc = 0x2bf428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf42c: 0xc0be862
    ctx->pc = 0x2BF42Cu;
    SET_GPR_U32(ctx, 31, 0x2BF434u);
    ctx->pc = 0x2BF430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF434u; }
    }
    if (ctx->pc != 0x2BF434u) { return; }
    ctx->pc = 0x2BF434u;
    // 0x2bf434: 0x3c04003b
    ctx->pc = 0x2bf434u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf438: 0x24846be8
    ctx->pc = 0x2bf438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27624));
    // 0x2bf43c: 0x220282d
    ctx->pc = 0x2bf43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf440: 0x200302d
    ctx->pc = 0x2bf440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf444: 0xc0b4a34
    ctx->pc = 0x2BF444u;
    SET_GPR_U32(ctx, 31, 0x2BF44Cu);
    ctx->pc = 0x2BF448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF44Cu; }
    }
    if (ctx->pc != 0x2BF44Cu) { return; }
    ctx->pc = 0x2BF44Cu;
    // 0x2bf44c: 0x32620004
    ctx->pc = 0x2bf44cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 4));
label_2bf450:
    // 0x2bf450: 0x10400010
    ctx->pc = 0x2BF450u;
    {
        const bool branch_taken_0x2bf450 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF454u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf450) {
            ctx->pc = 0x2BF494u;
            goto label_2bf494;
        }
    }
    ctx->pc = 0x2BF458u;
    // 0x2bf458: 0xc0be862
    ctx->pc = 0x2BF458u;
    SET_GPR_U32(ctx, 31, 0x2BF460u);
    ctx->pc = 0x2BF45Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF460u; }
    }
    if (ctx->pc != 0x2BF460u) { return; }
    ctx->pc = 0x2BF460u;
    // 0x2bf460: 0x40882d
    ctx->pc = 0x2bf460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf464: 0xc0be862
    ctx->pc = 0x2BF464u;
    SET_GPR_U32(ctx, 31, 0x2BF46Cu);
    ctx->pc = 0x2BF468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF46Cu; }
    }
    if (ctx->pc != 0x2BF46Cu) { return; }
    ctx->pc = 0x2BF46Cu;
    // 0x2bf46c: 0x40802d
    ctx->pc = 0x2bf46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf470: 0xc0be862
    ctx->pc = 0x2BF470u;
    SET_GPR_U32(ctx, 31, 0x2BF478u);
    ctx->pc = 0x2BF474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF478u; }
    }
    if (ctx->pc != 0x2BF478u) { return; }
    ctx->pc = 0x2BF478u;
    // 0x2bf478: 0x3c04003b
    ctx->pc = 0x2bf478u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf47c: 0x24846c08
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27656));
    // 0x2bf480: 0x220282d
    ctx->pc = 0x2bf480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf484: 0x200302d
    ctx->pc = 0x2bf484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf488: 0xc0b4a34
    ctx->pc = 0x2BF488u;
    SET_GPR_U32(ctx, 31, 0x2BF490u);
    ctx->pc = 0x2BF48Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF490u; }
    }
    if (ctx->pc != 0x2BF490u) { return; }
    ctx->pc = 0x2BF490u;
label_2bf490:
    // 0x2bf490: 0x3c020037
    ctx->pc = 0x2bf490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bf494:
    // 0x2bf494: 0x8c422888
    ctx->pc = 0x2bf494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf498: 0x8c420024
    ctx->pc = 0x2bf498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2bf49c: 0x10400009
    ctx->pc = 0x2BF49Cu;
    {
        const bool branch_taken_0x2bf49c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF4A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x2bf49c) {
            ctx->pc = 0x2BF4C4u;
            goto label_2bf4c4;
        }
    }
    ctx->pc = 0x2BF4A4u;
    // 0x2bf4a4: 0xc0b9514
    ctx->pc = 0x2BF4A4u;
    SET_GPR_U32(ctx, 31, 0x2BF4ACu);
    ctx->pc = 0x2BF4A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4ACu; }
    }
    if (ctx->pc != 0x2BF4ACu) { return; }
    ctx->pc = 0x2BF4ACu;
    // 0x2bf4ac: 0x27a50060
    ctx->pc = 0x2bf4acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf4b0: 0xc0b9514
    ctx->pc = 0x2BF4B0u;
    SET_GPR_U32(ctx, 31, 0x2BF4B8u);
    ctx->pc = 0x2BF4B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4B8u; }
    }
    if (ctx->pc != 0x2BF4B8u) { return; }
    ctx->pc = 0x2BF4B8u;
    // 0x2bf4b8: 0x27a50040
    ctx->pc = 0x2bf4b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bf4bc: 0xc0b9514
    ctx->pc = 0x2BF4BCu;
    SET_GPR_U32(ctx, 31, 0x2BF4C4u);
    ctx->pc = 0x2BF4C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4C4u; }
    }
    if (ctx->pc != 0x2BF4C4u) { return; }
    ctx->pc = 0x2BF4C4u;
label_2bf4c4:
    // 0x2bf4c4: 0x3c020037
    ctx->pc = 0x2bf4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bf4c8: 0x8c422888
    ctx->pc = 0x2bf4c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf4cc: 0x8c420018
    ctx->pc = 0x2bf4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bf4d0: 0x10400009
    ctx->pc = 0x2BF4D0u;
    {
        const bool branch_taken_0x2bf4d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF4D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
        if (branch_taken_0x2bf4d0) {
            ctx->pc = 0x2BF4F8u;
            goto label_2bf4f8;
        }
    }
    ctx->pc = 0x2BF4D8u;
    // 0x2bf4d8: 0xc0b958e
    ctx->pc = 0x2BF4D8u;
    SET_GPR_U32(ctx, 31, 0x2BF4E0u);
    ctx->pc = 0x2BF4DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4E0u; }
    }
    if (ctx->pc != 0x2BF4E0u) { return; }
    ctx->pc = 0x2BF4E0u;
    // 0x2bf4e0: 0x27a40090
    ctx->pc = 0x2bf4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bf4e4: 0xc0b958e
    ctx->pc = 0x2BF4E4u;
    SET_GPR_U32(ctx, 31, 0x2BF4ECu);
    ctx->pc = 0x2BF4E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4ECu; }
    }
    if (ctx->pc != 0x2BF4ECu) { return; }
    ctx->pc = 0x2BF4ECu;
    // 0x2bf4ec: 0x27a40070
    ctx->pc = 0x2bf4ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bf4f0: 0xc0b958e
    ctx->pc = 0x2BF4F0u;
    SET_GPR_U32(ctx, 31, 0x2BF4F8u);
    ctx->pc = 0x2BF4F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4F8u; }
    }
    if (ctx->pc != 0x2BF4F8u) { return; }
    ctx->pc = 0x2BF4F8u;
label_2bf4f8:
    // 0x2bf4f8: 0x3c020037
    ctx->pc = 0x2bf4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bf4fc: 0x8c422888
    ctx->pc = 0x2bf4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf500: 0x8c420020
    ctx->pc = 0x2bf500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf504: 0x1040000a
    ctx->pc = 0x2BF504u;
    {
        const bool branch_taken_0x2bf504 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF508u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x2bf504) {
            ctx->pc = 0x2BF530u;
            goto label_2bf530;
        }
    }
    ctx->pc = 0x2BF50Cu;
    // 0x2bf50c: 0xa0202d
    ctx->pc = 0x2bf50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf510: 0xc0b6278
    ctx->pc = 0x2BF510u;
    SET_GPR_U32(ctx, 31, 0x2BF518u);
    ctx->pc = 0x2BF514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF518u; }
    }
    if (ctx->pc != 0x2BF518u) { return; }
    ctx->pc = 0x2BF518u;
    // 0x2bf518: 0x27a50060
    ctx->pc = 0x2bf518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf51c: 0xa0202d
    ctx->pc = 0x2bf51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf520: 0xc0b6278
    ctx->pc = 0x2BF520u;
    SET_GPR_U32(ctx, 31, 0x2BF528u);
    ctx->pc = 0x2BF524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF528u; }
    }
    if (ctx->pc != 0x2BF528u) { return; }
    ctx->pc = 0x2BF528u;
    // 0x2bf528: 0x10000008
    ctx->pc = 0x2BF528u;
    {
        const bool branch_taken_0x2bf528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bf528) {
            ctx->pc = 0x2BF54Cu;
            goto label_2bf54c;
        }
    }
    ctx->pc = 0x2BF530u;
label_2bf530:
    // 0x2bf530: 0xa0202d
    ctx->pc = 0x2bf530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf534: 0xc0b6278
    ctx->pc = 0x2BF534u;
    SET_GPR_U32(ctx, 31, 0x2BF53Cu);
    ctx->pc = 0x2BF538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF53Cu; }
    }
    if (ctx->pc != 0x2BF53Cu) { return; }
    ctx->pc = 0x2BF53Cu;
    // 0x2bf53c: 0x27a50060
    ctx->pc = 0x2bf53cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf540: 0xa0202d
    ctx->pc = 0x2bf540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf544: 0xc0b6278
    ctx->pc = 0x2BF544u;
    SET_GPR_U32(ctx, 31, 0x2BF54Cu);
    ctx->pc = 0x2BF548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89E0_0x2d89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF54Cu; }
    }
    if (ctx->pc != 0x2BF54Cu) { return; }
    ctx->pc = 0x2BF54Cu;
label_2bf54c:
    // 0x2bf54c: 0x12600022
    ctx->pc = 0x2BF54Cu;
    {
        const bool branch_taken_0x2bf54c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF550u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 256));
        if (branch_taken_0x2bf54c) {
            ctx->pc = 0x2BF5D8u;
            goto label_2bf5d8;
        }
    }
    ctx->pc = 0x2BF554u;
    // 0x2bf554: 0x10400010
    ctx->pc = 0x2BF554u;
    {
        const bool branch_taken_0x2bf554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF558u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x2bf554) {
            ctx->pc = 0x2BF598u;
            goto label_2bf598;
        }
    }
    ctx->pc = 0x2BF55Cu;
    // 0x2bf55c: 0xc0be862
    ctx->pc = 0x2BF55Cu;
    SET_GPR_U32(ctx, 31, 0x2BF564u);
    ctx->pc = 0x2BF560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF564u; }
    }
    if (ctx->pc != 0x2BF564u) { return; }
    ctx->pc = 0x2BF564u;
    // 0x2bf564: 0x40882d
    ctx->pc = 0x2bf564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf568: 0xc0be862
    ctx->pc = 0x2BF568u;
    SET_GPR_U32(ctx, 31, 0x2BF570u);
    ctx->pc = 0x2BF56Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF570u; }
    }
    if (ctx->pc != 0x2BF570u) { return; }
    ctx->pc = 0x2BF570u;
    // 0x2bf570: 0x40802d
    ctx->pc = 0x2bf570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf574: 0xc0be862
    ctx->pc = 0x2BF574u;
    SET_GPR_U32(ctx, 31, 0x2BF57Cu);
    ctx->pc = 0x2BF578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF57Cu; }
    }
    if (ctx->pc != 0x2BF57Cu) { return; }
    ctx->pc = 0x2BF57Cu;
    // 0x2bf57c: 0x3c04003b
    ctx->pc = 0x2bf57cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf580: 0x24846c30
    ctx->pc = 0x2bf580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27696));
    // 0x2bf584: 0x220282d
    ctx->pc = 0x2bf584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf588: 0x200302d
    ctx->pc = 0x2bf588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf58c: 0xc0b4a34
    ctx->pc = 0x2BF58Cu;
    SET_GPR_U32(ctx, 31, 0x2BF594u);
    ctx->pc = 0x2BF590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF594u; }
    }
    if (ctx->pc != 0x2BF594u) { return; }
    ctx->pc = 0x2BF594u;
    // 0x2bf594: 0x32620008
    ctx->pc = 0x2bf594u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 8));
label_2bf598:
    // 0x2bf598: 0x10400010
    ctx->pc = 0x2BF598u;
    {
        const bool branch_taken_0x2bf598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF59Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x2bf598) {
            ctx->pc = 0x2BF5DCu;
            goto label_2bf5dc;
        }
    }
    ctx->pc = 0x2BF5A0u;
    // 0x2bf5a0: 0xc0be862
    ctx->pc = 0x2BF5A0u;
    SET_GPR_U32(ctx, 31, 0x2BF5A8u);
    ctx->pc = 0x2BF5A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5A8u; }
    }
    if (ctx->pc != 0x2BF5A8u) { return; }
    ctx->pc = 0x2BF5A8u;
    // 0x2bf5a8: 0x40882d
    ctx->pc = 0x2bf5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5ac: 0xc0be862
    ctx->pc = 0x2BF5ACu;
    SET_GPR_U32(ctx, 31, 0x2BF5B4u);
    ctx->pc = 0x2BF5B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5B4u; }
    }
    if (ctx->pc != 0x2BF5B4u) { return; }
    ctx->pc = 0x2BF5B4u;
    // 0x2bf5b4: 0x40802d
    ctx->pc = 0x2bf5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5b8: 0xc0be862
    ctx->pc = 0x2BF5B8u;
    SET_GPR_U32(ctx, 31, 0x2BF5C0u);
    ctx->pc = 0x2BF5BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5C0u; }
    }
    if (ctx->pc != 0x2BF5C0u) { return; }
    ctx->pc = 0x2BF5C0u;
    // 0x2bf5c0: 0x3c04003b
    ctx->pc = 0x2bf5c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf5c4: 0x24846c50
    ctx->pc = 0x2bf5c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27728));
    // 0x2bf5c8: 0x220282d
    ctx->pc = 0x2bf5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5cc: 0x200302d
    ctx->pc = 0x2bf5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5d0: 0xc0b4a34
    ctx->pc = 0x2BF5D0u;
    SET_GPR_U32(ctx, 31, 0x2BF5D8u);
    ctx->pc = 0x2BF5D4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5D8u; }
    }
    if (ctx->pc != 0x2BF5D8u) { return; }
    ctx->pc = 0x2BF5D8u;
label_2bf5d8:
    // 0x2bf5d8: 0x27a50050
    ctx->pc = 0x2bf5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
label_2bf5dc:
    // 0x2bf5dc: 0xc0b9514
    ctx->pc = 0x2BF5DCu;
    SET_GPR_U32(ctx, 31, 0x2BF5E4u);
    ctx->pc = 0x2BF5E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5E4u; }
    }
    if (ctx->pc != 0x2BF5E4u) { return; }
    ctx->pc = 0x2BF5E4u;
    // 0x2bf5e4: 0x27a50060
    ctx->pc = 0x2bf5e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf5e8: 0xc0b9514
    ctx->pc = 0x2BF5E8u;
    SET_GPR_U32(ctx, 31, 0x2BF5F0u);
    ctx->pc = 0x2BF5ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5F0u; }
    }
    if (ctx->pc != 0x2BF5F0u) { return; }
    ctx->pc = 0x2BF5F0u;
    // 0x2bf5f0: 0x12600022
    ctx->pc = 0x2BF5F0u;
    {
        const bool branch_taken_0x2bf5f0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF5F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 512));
        if (branch_taken_0x2bf5f0) {
            ctx->pc = 0x2BF67Cu;
            goto label_2bf67c;
        }
    }
    ctx->pc = 0x2BF5F8u;
    // 0x2bf5f8: 0x10400010
    ctx->pc = 0x2BF5F8u;
    {
        const bool branch_taken_0x2bf5f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF5FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 16));
        if (branch_taken_0x2bf5f8) {
            ctx->pc = 0x2BF63Cu;
            goto label_2bf63c;
        }
    }
    ctx->pc = 0x2BF600u;
    // 0x2bf600: 0xc0be862
    ctx->pc = 0x2BF600u;
    SET_GPR_U32(ctx, 31, 0x2BF608u);
    ctx->pc = 0x2BF604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF608u; }
    }
    if (ctx->pc != 0x2BF608u) { return; }
    ctx->pc = 0x2BF608u;
    // 0x2bf608: 0x40882d
    ctx->pc = 0x2bf608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf60c: 0xc0be862
    ctx->pc = 0x2BF60Cu;
    SET_GPR_U32(ctx, 31, 0x2BF614u);
    ctx->pc = 0x2BF610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF614u; }
    }
    if (ctx->pc != 0x2BF614u) { return; }
    ctx->pc = 0x2BF614u;
    // 0x2bf614: 0x40802d
    ctx->pc = 0x2bf614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf618: 0xc0be862
    ctx->pc = 0x2BF618u;
    SET_GPR_U32(ctx, 31, 0x2BF620u);
    ctx->pc = 0x2BF61Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF620u; }
    }
    if (ctx->pc != 0x2BF620u) { return; }
    ctx->pc = 0x2BF620u;
    // 0x2bf620: 0x3c04003b
    ctx->pc = 0x2bf620u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf624: 0x24846c78
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27768));
    // 0x2bf628: 0x220282d
    ctx->pc = 0x2bf628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf62c: 0x200302d
    ctx->pc = 0x2bf62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf630: 0xc0b4a34
    ctx->pc = 0x2BF630u;
    SET_GPR_U32(ctx, 31, 0x2BF638u);
    ctx->pc = 0x2BF634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF638u; }
    }
    if (ctx->pc != 0x2BF638u) { return; }
    ctx->pc = 0x2BF638u;
    // 0x2bf638: 0x32620010
    ctx->pc = 0x2bf638u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 16));
label_2bf63c:
    // 0x2bf63c: 0x10400010
    ctx->pc = 0x2BF63Cu;
    {
        const bool branch_taken_0x2bf63c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF640u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x2bf63c) {
            ctx->pc = 0x2BF680u;
            goto label_2bf680;
        }
    }
    ctx->pc = 0x2BF644u;
    // 0x2bf644: 0xc0be862
    ctx->pc = 0x2BF644u;
    SET_GPR_U32(ctx, 31, 0x2BF64Cu);
    ctx->pc = 0x2BF648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF64Cu; }
    }
    if (ctx->pc != 0x2BF64Cu) { return; }
    ctx->pc = 0x2BF64Cu;
    // 0x2bf64c: 0x40882d
    ctx->pc = 0x2bf64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf650: 0xc0be862
    ctx->pc = 0x2BF650u;
    SET_GPR_U32(ctx, 31, 0x2BF658u);
    ctx->pc = 0x2BF654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF658u; }
    }
    if (ctx->pc != 0x2BF658u) { return; }
    ctx->pc = 0x2BF658u;
    // 0x2bf658: 0x40802d
    ctx->pc = 0x2bf658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf65c: 0xc0be862
    ctx->pc = 0x2BF65Cu;
    SET_GPR_U32(ctx, 31, 0x2BF664u);
    ctx->pc = 0x2BF660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF664u; }
    }
    if (ctx->pc != 0x2BF664u) { return; }
    ctx->pc = 0x2BF664u;
    // 0x2bf664: 0x3c04003b
    ctx->pc = 0x2bf664u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf668: 0x24846c98
    ctx->pc = 0x2bf668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27800));
    // 0x2bf66c: 0x220282d
    ctx->pc = 0x2bf66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf670: 0x200302d
    ctx->pc = 0x2bf670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf674: 0xc0b4a34
    ctx->pc = 0x2BF674u;
    SET_GPR_U32(ctx, 31, 0x2BF67Cu);
    ctx->pc = 0x2BF678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF67Cu; }
    }
    if (ctx->pc != 0x2BF67Cu) { return; }
    ctx->pc = 0x2BF67Cu;
label_2bf67c:
    // 0x2bf67c: 0x27a50050
    ctx->pc = 0x2bf67cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
label_2bf680:
    // 0x2bf680: 0x3c013e08
    ctx->pc = 0x2bf680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15880 << 16));
    // 0x2bf684: 0x34218889
    ctx->pc = 0x2bf684u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2bf688: 0x44816000
    ctx->pc = 0x2bf688u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2bf68c: 0xc0b957c
    ctx->pc = 0x2BF68Cu;
    SET_GPR_U32(ctx, 31, 0x2BF694u);
    ctx->pc = 0x2BF690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x2e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF694u; }
    }
    if (ctx->pc != 0x2BF694u) { return; }
    ctx->pc = 0x2BF694u;
    // 0x2bf694: 0x27a50060
    ctx->pc = 0x2bf694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf698: 0x3c013e08
    ctx->pc = 0x2bf698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15880 << 16));
    // 0x2bf69c: 0x34218889
    ctx->pc = 0x2bf69cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2bf6a0: 0x44816000
    ctx->pc = 0x2bf6a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2bf6a4: 0xc0b957c
    ctx->pc = 0x2BF6A4u;
    SET_GPR_U32(ctx, 31, 0x2BF6ACu);
    ctx->pc = 0x2BF6A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x2e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6ACu; }
    }
    if (ctx->pc != 0x2BF6ACu) { return; }
    ctx->pc = 0x2BF6ACu;
    // 0x2bf6ac: 0x12600022
    ctx->pc = 0x2BF6ACu;
    {
        const bool branch_taken_0x2bf6ac = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF6B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1024));
        if (branch_taken_0x2bf6ac) {
            ctx->pc = 0x2BF738u;
            goto label_2bf738;
        }
    }
    ctx->pc = 0x2BF6B4u;
    // 0x2bf6b4: 0x10400010
    ctx->pc = 0x2BF6B4u;
    {
        const bool branch_taken_0x2bf6b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF6B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32));
        if (branch_taken_0x2bf6b4) {
            ctx->pc = 0x2BF6F8u;
            goto label_2bf6f8;
        }
    }
    ctx->pc = 0x2BF6BCu;
    // 0x2bf6bc: 0xc0be862
    ctx->pc = 0x2BF6BCu;
    SET_GPR_U32(ctx, 31, 0x2BF6C4u);
    ctx->pc = 0x2BF6C0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6C4u; }
    }
    if (ctx->pc != 0x2BF6C4u) { return; }
    ctx->pc = 0x2BF6C4u;
    // 0x2bf6c4: 0x40882d
    ctx->pc = 0x2bf6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6c8: 0xc0be862
    ctx->pc = 0x2BF6C8u;
    SET_GPR_U32(ctx, 31, 0x2BF6D0u);
    ctx->pc = 0x2BF6CCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6D0u; }
    }
    if (ctx->pc != 0x2BF6D0u) { return; }
    ctx->pc = 0x2BF6D0u;
    // 0x2bf6d0: 0x40802d
    ctx->pc = 0x2bf6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6d4: 0xc0be862
    ctx->pc = 0x2BF6D4u;
    SET_GPR_U32(ctx, 31, 0x2BF6DCu);
    ctx->pc = 0x2BF6D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6DCu; }
    }
    if (ctx->pc != 0x2BF6DCu) { return; }
    ctx->pc = 0x2BF6DCu;
    // 0x2bf6dc: 0x3c04003b
    ctx->pc = 0x2bf6dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf6e0: 0x24846cc0
    ctx->pc = 0x2bf6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2bf6e4: 0x220282d
    ctx->pc = 0x2bf6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6e8: 0x200302d
    ctx->pc = 0x2bf6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6ec: 0xc0b4a34
    ctx->pc = 0x2BF6ECu;
    SET_GPR_U32(ctx, 31, 0x2BF6F4u);
    ctx->pc = 0x2BF6F0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6F4u; }
    }
    if (ctx->pc != 0x2BF6F4u) { return; }
    ctx->pc = 0x2BF6F4u;
    // 0x2bf6f4: 0x32620020
    ctx->pc = 0x2bf6f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32));
label_2bf6f8:
    // 0x2bf6f8: 0x10400010
    ctx->pc = 0x2BF6F8u;
    {
        const bool branch_taken_0x2bf6f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF6FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2bf6f8) {
            ctx->pc = 0x2BF73Cu;
            goto label_2bf73c;
        }
    }
    ctx->pc = 0x2BF700u;
    // 0x2bf700: 0xc0be862
    ctx->pc = 0x2BF700u;
    SET_GPR_U32(ctx, 31, 0x2BF708u);
    ctx->pc = 0x2BF704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF708u; }
    }
    if (ctx->pc != 0x2BF708u) { return; }
    ctx->pc = 0x2BF708u;
    // 0x2bf708: 0x40882d
    ctx->pc = 0x2bf708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf70c: 0xc0be862
    ctx->pc = 0x2BF70Cu;
    SET_GPR_U32(ctx, 31, 0x2BF714u);
    ctx->pc = 0x2BF710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF714u; }
    }
    if (ctx->pc != 0x2BF714u) { return; }
    ctx->pc = 0x2BF714u;
    // 0x2bf714: 0x40802d
    ctx->pc = 0x2bf714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf718: 0xc0be862
    ctx->pc = 0x2BF718u;
    SET_GPR_U32(ctx, 31, 0x2BF720u);
    ctx->pc = 0x2BF71Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF720u; }
    }
    if (ctx->pc != 0x2BF720u) { return; }
    ctx->pc = 0x2BF720u;
    // 0x2bf720: 0x3c04003b
    ctx->pc = 0x2bf720u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf724: 0x24846ce0
    ctx->pc = 0x2bf724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27872));
    // 0x2bf728: 0x220282d
    ctx->pc = 0x2bf728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf72c: 0x200302d
    ctx->pc = 0x2bf72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf730: 0xc0b4a34
    ctx->pc = 0x2BF730u;
    SET_GPR_U32(ctx, 31, 0x2BF738u);
    ctx->pc = 0x2BF734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF738u; }
    }
    if (ctx->pc != 0x2BF738u) { return; }
    ctx->pc = 0x2BF738u;
label_2bf738:
    // 0x2bf738: 0x3c021000
    ctx->pc = 0x2bf738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2bf73c:
    // 0x2bf73c: 0x34420002
    ctx->pc = 0x2bf73cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2bf740: 0xae820000
    ctx->pc = 0x2bf740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2bf744: 0xae800004
    ctx->pc = 0x2bf744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x2bf748: 0x3c020100
    ctx->pc = 0x2bf748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2bf74c: 0x34420404
    ctx->pc = 0x2bf74cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1028));
    // 0x2bf750: 0xae820008
    ctx->pc = 0x2bf750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2bf754: 0x3c021000
    ctx->pc = 0x2bf754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2bf758: 0xae82000c
    ctx->pc = 0x2bf758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2bf75c: 0x3c026802
    ctx->pc = 0x2bf75cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)26626 << 16));
    // 0x2bf760: 0x3442003e
    ctx->pc = 0x2bf760u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 62));
    // 0x2bf764: 0xae820010
    ctx->pc = 0x2bf764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2bf768: 0xc7a00050
    ctx->pc = 0x2bf768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf76c: 0xe6800014
    ctx->pc = 0x2bf76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x2bf770: 0xc7a00054
    ctx->pc = 0x2bf770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf774: 0xe6800018
    ctx->pc = 0x2bf774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x2bf778: 0xc7a00058
    ctx->pc = 0x2bf778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf77c: 0xe680001c
    ctx->pc = 0x2bf77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2bf780: 0xc7a00060
    ctx->pc = 0x2bf780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf784: 0xe6800020
    ctx->pc = 0x2bf784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x2bf788: 0xc7a00064
    ctx->pc = 0x2bf788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf78c: 0xe6800024
    ctx->pc = 0x2bf78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x2bf790: 0xc7a00068
    ctx->pc = 0x2bf790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf794: 0xe6800028
    ctx->pc = 0x2bf794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x2bf798: 0xae80002c
    ctx->pc = 0x2bf798u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x2bf79c: 0x8e4200cc
    ctx->pc = 0x2bf79cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2bf7a0: 0x10400015
    ctx->pc = 0x2BF7A0u;
    {
        const bool branch_taken_0x2bf7a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF7A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2bf7a0) {
            ctx->pc = 0x2BF7F8u;
            goto label_2bf7f8;
        }
    }
    ctx->pc = 0x2BF7A8u;
    // 0x2bf7a8: 0x8e4200d0
    ctx->pc = 0x2bf7a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x2bf7ac: 0x50400003
    ctx->pc = 0x2BF7ACu;
    {
        const bool branch_taken_0x2bf7ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bf7ac) {
            ctx->pc = 0x2BF7B0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->pc = 0x2BF7BCu;
            goto label_2bf7bc;
        }
    }
    ctx->pc = 0x2BF7B4u;
    // 0x2bf7b4: 0x1000000e
    ctx->pc = 0x2BF7B4u;
    {
        const bool branch_taken_0x2bf7b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF7B8u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7b4) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF7BCu;
label_2bf7bc:
    // 0x2bf7bc: 0x318c0
    ctx->pc = 0x2bf7bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf7c0: 0x24620080
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 128));
    // 0x2bf7c4: 0x2421021
    ctx->pc = 0x2bf7c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bf7c8: 0xae4200d0
    ctx->pc = 0x2bf7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x2bf7cc: 0x2431821
    ctx->pc = 0x2bf7ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2bf7d0: 0xfc600080
    ctx->pc = 0x2bf7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 0));
    // 0x2bf7d4: 0x8e4200b0
    ctx->pc = 0x2bf7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2bf7d8: 0x2421021
    ctx->pc = 0x2bf7d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bf7dc: 0x24030008
    ctx->pc = 0x2bf7dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bf7e0: 0xa04300a8
    ctx->pc = 0x2bf7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf7e4: 0x8e4200b0
    ctx->pc = 0x2bf7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2bf7e8: 0x24420001
    ctx->pc = 0x2bf7e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf7ec: 0xae4200b0
    ctx->pc = 0x2bf7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_2bf7f0:
    // 0x2bf7f0: 0xae4000cc
    ctx->pc = 0x2bf7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x2bf7f4: 0x24020004
    ctx->pc = 0x2bf7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2bf7f8:
    // 0x2bf7f8: 0xae4200b4
    ctx->pc = 0x2bf7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x2bf7fc: 0x3c020037
    ctx->pc = 0x2bf7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bf800: 0x8c422888
    ctx->pc = 0x2bf800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10376)));
    // 0x2bf804: 0x8c420018
    ctx->pc = 0x2bf804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bf808: 0x10400043
    ctx->pc = 0x2BF808u;
    {
        const bool branch_taken_0x2bf808 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF80Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2bf808) {
            ctx->pc = 0x2BF918u;
            goto label_2bf918;
        }
    }
    ctx->pc = 0x2BF810u;
    // 0x2bf810: 0x460c6042
    ctx->pc = 0x2bf810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2bf814: 0xc7a00078
    ctx->pc = 0x2bf814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf818: 0x46000082
    ctx->pc = 0x2bf818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bf81c: 0x46020840
    ctx->pc = 0x2bf81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bf820: 0x0
    ctx->pc = 0x2bf820u;
    // NOP
    // 0x2bf824: 0x0
    ctx->pc = 0x2bf824u;
    // NOP
    // 0x2bf828: 0x46010004
    ctx->pc = 0x2bf828u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bf82c: 0x46000032
    ctx->pc = 0x2bf82cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf830: 0x0
    ctx->pc = 0x2bf830u;
    // NOP
    // 0x2bf834: 0x45030005
    ctx->pc = 0x2BF834u;
    {
        const bool branch_taken_0x2bf834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf834) {
            ctx->pc = 0x2BF838u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2BF84Cu;
            goto label_2bf84c;
        }
    }
    ctx->pc = 0x2BF83Cu;
    // 0x2bf83c: 0x460c6302
    ctx->pc = 0x2bf83cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2bf840: 0xc0ba284
    ctx->pc = 0x2BF840u;
    SET_GPR_U32(ctx, 31, 0x2BF848u);
    ctx->pc = 0x2BF844u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF848u; }
    }
    if (ctx->pc != 0x2BF848u) { return; }
    ctx->pc = 0x2BF848u;
    // 0x2bf848: 0xc7ac0074
    ctx->pc = 0x2bf848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bf84c:
    // 0x2bf84c: 0x0
    ctx->pc = 0x2bf84cu;
    // NOP
    // 0x2bf850: 0x0
    ctx->pc = 0x2bf850u;
    // NOP
    // 0x2bf854: 0x46006303
    ctx->pc = 0x2bf854u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2bf858: 0xc0b9d24
    ctx->pc = 0x2BF858u;
    SET_GPR_U32(ctx, 31, 0x2BF860u);
    ctx->pc = 0x2E7490u;
    {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x2e7490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF860u; }
    }
    if (ctx->pc != 0x2BF860u) { return; }
    ctx->pc = 0x2BF860u;
    // 0x2bf860: 0x8ea20004
    ctx->pc = 0x2bf860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf864: 0xe4400050
    ctx->pc = 0x2bf864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2bf868: 0xc7ac0070
    ctx->pc = 0x2bf868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf86c: 0xc0ba04a
    ctx->pc = 0x2BF86Cu;
    SET_GPR_U32(ctx, 31, 0x2BF874u);
    ctx->pc = 0x2BF870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF874u; }
    }
    if (ctx->pc != 0x2BF874u) { return; }
    ctx->pc = 0x2BF874u;
    // 0x2bf874: 0x8ea20004
    ctx->pc = 0x2bf874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf878: 0xe4400054
    ctx->pc = 0x2bf878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2bf87c: 0x32622000
    ctx->pc = 0x2bf87cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 8192));
    // 0x2bf880: 0x10400018
    ctx->pc = 0x2BF880u;
    {
        const bool branch_taken_0x2bf880 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF884u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
        if (branch_taken_0x2bf880) {
            ctx->pc = 0x2BF8E4u;
            goto label_2bf8e4;
        }
    }
    ctx->pc = 0x2BF888u;
    // 0x2bf888: 0xc4410054
    ctx->pc = 0x2bf888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf88c: 0x3c014334
    ctx->pc = 0x2bf88cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2bf890: 0x44811800
    ctx->pc = 0x2bf890u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2bf894: 0x46030842
    ctx->pc = 0x2bf894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bf898: 0x3c014049
    ctx->pc = 0x2bf898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2bf89c: 0x34210fdb
    ctx->pc = 0x2bf89cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2bf8a0: 0x44811000
    ctx->pc = 0x2bf8a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2bf8a4: 0x0
    ctx->pc = 0x2bf8a4u;
    // NOP
    // 0x2bf8a8: 0x0
    ctx->pc = 0x2bf8a8u;
    // NOP
    // 0x2bf8ac: 0x46020843
    ctx->pc = 0x2bf8acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2bf8b0: 0xc4400050
    ctx->pc = 0x2bf8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf8b4: 0x46030002
    ctx->pc = 0x2bf8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bf8b8: 0x0
    ctx->pc = 0x2bf8b8u;
    // NOP
    // 0x2bf8bc: 0x0
    ctx->pc = 0x2bf8bcu;
    // NOP
    // 0x2bf8c0: 0x46020003
    ctx->pc = 0x2bf8c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2bf8c4: 0x3c04003b
    ctx->pc = 0x2bf8c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bf8c8: 0x460008a4
    ctx->pc = 0x2bf8c8u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2bf8cc: 0x44051000
    ctx->pc = 0x2bf8ccu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[2]);
    // 0x2bf8d0: 0x46000064
    ctx->pc = 0x2bf8d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2bf8d4: 0x44060800
    ctx->pc = 0x2bf8d4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x2bf8d8: 0xc0b4a34
    ctx->pc = 0x2BF8D8u;
    SET_GPR_U32(ctx, 31, 0x2BF8E0u);
    ctx->pc = 0x2BF8DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27912));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF8E0u; }
    }
    if (ctx->pc != 0x2BF8E0u) { return; }
    ctx->pc = 0x2BF8E0u;
    // 0x2bf8e0: 0x8ea20004
    ctx->pc = 0x2bf8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2bf8e4:
    // 0x2bf8e4: 0xc4400050
    ctx->pc = 0x2bf8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf8e8: 0x3c013ea2
    ctx->pc = 0x2bf8e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2bf8ec: 0x3421f983
    ctx->pc = 0x2bf8ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2bf8f0: 0x44810800
    ctx->pc = 0x2bf8f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2bf8f4: 0x46010002
    ctx->pc = 0x2bf8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bf8f8: 0xe4400050
    ctx->pc = 0x2bf8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2bf8fc: 0x8ea20004
    ctx->pc = 0x2bf8fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bf900: 0xc4400054
    ctx->pc = 0x2bf900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf904: 0x3c013e22
    ctx->pc = 0x2bf904u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15906 << 16));
    // 0x2bf908: 0x3421f983
    ctx->pc = 0x2bf908u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2bf90c: 0x44810800
    ctx->pc = 0x2bf90cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2bf910: 0x46010002
    ctx->pc = 0x2bf910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bf914: 0xe4400054
    ctx->pc = 0x2bf914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_2bf918:
    // 0x2bf918: 0x26820030
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 48));
    // 0x2bf91c: 0xdfbf0110
    ctx->pc = 0x2bf91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bf920: 0xdfb60100
    ctx->pc = 0x2bf920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bf924: 0xdfb500f0
    ctx->pc = 0x2bf924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bf928: 0xdfb400e0
    ctx->pc = 0x2bf928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bf92c: 0xdfb300d0
    ctx->pc = 0x2bf92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bf930: 0xdfb200c0
    ctx->pc = 0x2bf930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bf934: 0xdfb100b0
    ctx->pc = 0x2bf934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bf938: 0xdfb000a0
    ctx->pc = 0x2bf938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bf93c: 0x3e00008
    ctx->pc = 0x2BF93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BF24Cu: goto label_2bf24c;
            case 0x2BF25Cu: goto label_2bf25c;
            case 0x2BF2F4u: goto label_2bf2f4;
            case 0x2BF338u: goto label_2bf338;
            case 0x2BF380u: goto label_2bf380;
            case 0x2BF3E0u: goto label_2bf3e0;
            case 0x2BF404u: goto label_2bf404;
            case 0x2BF450u: goto label_2bf450;
            case 0x2BF490u: goto label_2bf490;
            case 0x2BF494u: goto label_2bf494;
            case 0x2BF4C4u: goto label_2bf4c4;
            case 0x2BF4F8u: goto label_2bf4f8;
            case 0x2BF530u: goto label_2bf530;
            case 0x2BF54Cu: goto label_2bf54c;
            case 0x2BF598u: goto label_2bf598;
            case 0x2BF5D8u: goto label_2bf5d8;
            case 0x2BF5DCu: goto label_2bf5dc;
            case 0x2BF63Cu: goto label_2bf63c;
            case 0x2BF67Cu: goto label_2bf67c;
            case 0x2BF680u: goto label_2bf680;
            case 0x2BF6F8u: goto label_2bf6f8;
            case 0x2BF738u: goto label_2bf738;
            case 0x2BF73Cu: goto label_2bf73c;
            case 0x2BF7BCu: goto label_2bf7bc;
            case 0x2BF7F0u: goto label_2bf7f0;
            case 0x2BF7F8u: goto label_2bf7f8;
            case 0x2BF84Cu: goto label_2bf84c;
            case 0x2BF8E4u: goto label_2bf8e4;
            case 0x2BF918u: goto label_2bf918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BF944u;
}
