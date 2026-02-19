#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setImageTag
// Address: 0x2dc128 - 0x2dc4d4
void setImageTag_0x2dc128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc128u;

    // 0x2dc128: 0x27bdff00
    ctx->pc = 0x2dc128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2dc12c: 0xffbf00f0
    ctx->pc = 0x2dc12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2dc130: 0xffbe00e0
    ctx->pc = 0x2dc130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x2dc134: 0xffb700d0
    ctx->pc = 0x2dc134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2dc138: 0xffb600c0
    ctx->pc = 0x2dc138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2dc13c: 0xffb500b0
    ctx->pc = 0x2dc13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2dc140: 0xffb400a0
    ctx->pc = 0x2dc140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2dc144: 0xffb30090
    ctx->pc = 0x2dc144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2dc148: 0xffb20080
    ctx->pc = 0x2dc148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2dc14c: 0xffb10070
    ctx->pc = 0x2dc14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2dc150: 0xffb00060
    ctx->pc = 0x2dc150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2dc154: 0xa0982d
    ctx->pc = 0x2dc154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc158: 0xc0802d
    ctx->pc = 0x2dc158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc15c: 0xafa70050
    ctx->pc = 0x2dc15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2dc160: 0xafa80054
    ctx->pc = 0x2dc160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x2dc164: 0x7b103
    ctx->pc = 0x2dc164u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2dc168: 0x8a903
    ctx->pc = 0x2dc168u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 4));
    // 0x2dc16c: 0x3c02003c
    ctx->pc = 0x2dc16cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dc170: 0x24438318
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294935320));
    // 0x2dc174: 0xdc428318
    ctx->pc = 0x2dc174u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294935320)));
    // 0x2dc178: 0xffa20030
    ctx->pc = 0x2dc178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x2dc17c: 0xdc620008
    ctx->pc = 0x2dc17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc180: 0xffa20038
    ctx->pc = 0x2dc180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x2dc184: 0x3c02003c
    ctx->pc = 0x2dc184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dc188: 0x24438308
    ctx->pc = 0x2dc188u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294935304));
    // 0x2dc18c: 0xdc428308
    ctx->pc = 0x2dc18cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294935304)));
    // 0x2dc190: 0xffa20040
    ctx->pc = 0x2dc190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x2dc194: 0xdc620008
    ctx->pc = 0x2dc194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc198: 0xffa20048
    ctx->pc = 0x2dc198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    // 0x2dc19c: 0x27b10020
    ctx->pc = 0x2dc19cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc1a0: 0x3c020fff
    ctx->pc = 0x2dc1a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2dc1a4: 0x3442ffff
    ctx->pc = 0x2dc1a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2dc1a8: 0x821024
    ctx->pc = 0x2dc1a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dc1ac: 0x3c052000
    ctx->pc = 0x2dc1acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)8192 << 16));
    // 0x2dc1b0: 0x220202d
    ctx->pc = 0x2dc1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1b4: 0xc0b8e66
    ctx->pc = 0x2DC1B4u;
    SET_GPR_U32(ctx, 31, 0x2DC1BCu);
    ctx->pc = 0x2DC1B8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x2E3998u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x2e3998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1BCu; }
    }
    if (ctx->pc != 0x2DC1BCu) { return; }
    ctx->pc = 0x2DC1BCu;
    // 0x2dc1bc: 0xc0b8e6a
    ctx->pc = 0x2DC1BCu;
    SET_GPR_U32(ctx, 31, 0x2DC1C4u);
    ctx->pc = 0x2DC1C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x2e39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1C4u; }
    }
    if (ctx->pc != 0x2DC1C4u) { return; }
    ctx->pc = 0x2DC1C4u;
    // 0x2dc1c4: 0x16000050
    ctx->pc = 0x2DC1C4u;
    {
        const bool branch_taken_0x2dc1c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DC1C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2dc1c4) {
            ctx->pc = 0x2DC308u;
            goto label_2dc308;
        }
    }
    ctx->pc = 0x2DC1CCu;
    // 0x2dc1cc: 0x220202d
    ctx->pc = 0x2dc1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1d0: 0x282d
    ctx->pc = 0x2dc1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1d4: 0x302d
    ctx->pc = 0x2dc1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1d8: 0xc0b8e84
    ctx->pc = 0x2DC1D8u;
    SET_GPR_U32(ctx, 31, 0x2DC1E0u);
    ctx->pc = 0x2DC1DCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x2e3a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1E0u; }
    }
    if (ctx->pc != 0x2DC1E0u) { return; }
    ctx->pc = 0x2DC1E0u;
    // 0x2dc1e0: 0x220202d
    ctx->pc = 0x2dc1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1e4: 0xc0b8eec
    ctx->pc = 0x2DC1E4u;
    SET_GPR_U32(ctx, 31, 0x2DC1ECu);
    ctx->pc = 0x2DC1E8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x2E3BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x2e3bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1ECu; }
    }
    if (ctx->pc != 0x2DC1ECu) { return; }
    ctx->pc = 0x2DC1ECu;
    // 0x2dc1ec: 0x220202d
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1f0: 0x3406a140
    ctx->pc = 0x2dc1f0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 41280));
    // 0x2dc1f4: 0x6313c
    ctx->pc = 0x2dc1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 4));
    // 0x2dc1f8: 0xc0b8f1a
    ctx->pc = 0x2DC1F8u;
    SET_GPR_U32(ctx, 31, 0x2DC200u);
    ctx->pc = 0x2DC1FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC200u; }
    }
    if (ctx->pc != 0x2DC200u) { return; }
    ctx->pc = 0x2DC200u;
    // 0x2dc200: 0x220202d
    ctx->pc = 0x2dc200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc204: 0x24060010
    ctx->pc = 0x2dc204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dc208: 0x6303c
    ctx->pc = 0x2dc208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2dc20c: 0x34c60010
    ctx->pc = 0x2dc20cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 16));
    // 0x2dc210: 0xc0b8f1a
    ctx->pc = 0x2DC210u;
    SET_GPR_U32(ctx, 31, 0x2DC218u);
    ctx->pc = 0x2DC214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 82));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC218u; }
    }
    if (ctx->pc != 0x2DC218u) { return; }
    ctx->pc = 0x2DC218u;
    // 0x2dc218: 0xc0b8ef2
    ctx->pc = 0x2DC218u;
    SET_GPR_U32(ctx, 31, 0x2DC220u);
    ctx->pc = 0x2DC21Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x2e3bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC220u; }
    }
    if (ctx->pc != 0x2DC220u) { return; }
    ctx->pc = 0x2DC220u;
    // 0x2dc220: 0x1ac00038
    ctx->pc = 0x2DC220u;
    {
        const bool branch_taken_0x2dc220 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2DC224u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dc220) {
            ctx->pc = 0x2DC304u;
            goto label_2dc304;
        }
    }
    ctx->pc = 0x2DC228u;
    // 0x2dc228: 0x3c1e0800
    ctx->pc = 0x2dc228u;
    SET_GPR_U32(ctx, 30, ((uint32_t)2048 << 16));
    // 0x2dc22c: 0x1ef03c
    ctx->pc = 0x2dc22cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x2dc230: 0x37de0040
    ctx->pc = 0x2dc230u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 64));
    // 0x2dc234: 0x3c170fff
    ctx->pc = 0x2dc234u;
    SET_GPR_U32(ctx, 23, ((uint32_t)4095 << 16));
    // 0x2dc238: 0x36f7ffff
    ctx->pc = 0x2dc238u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 65535));
    // 0x2dc23c: 0x0
    ctx->pc = 0x2dc23cu;
    // NOP
label_2dc240:
    // 0x2dc240: 0x1aa0002c
    ctx->pc = 0x2DC240u;
    {
        const bool branch_taken_0x2dc240 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2DC244u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dc240) {
            ctx->pc = 0x2DC2F4u;
            goto label_2dc2f4;
        }
    }
    ctx->pc = 0x2DC248u;
    // 0x2dc248: 0x27b00020
    ctx->pc = 0x2dc248u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc24c: 0x121100
    ctx->pc = 0x2dc24cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2dc250: 0x24420000
    ctx->pc = 0x2dc250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2dc254: 0x2a03c
    ctx->pc = 0x2dc254u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_2dc258:
    // 0x2dc258: 0x200202d
    ctx->pc = 0x2dc258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc25c: 0x282d
    ctx->pc = 0x2dc25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc260: 0x302d
    ctx->pc = 0x2dc260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc264: 0xc0b8e84
    ctx->pc = 0x2DC264u;
    SET_GPR_U32(ctx, 31, 0x2DC26Cu);
    ctx->pc = 0x2DC268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x2e3a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC26Cu; }
    }
    if (ctx->pc != 0x2DC26Cu) { return; }
    ctx->pc = 0x2DC26Cu;
    // 0x2dc26c: 0x200202d
    ctx->pc = 0x2dc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc270: 0xc0b8eec
    ctx->pc = 0x2DC270u;
    SET_GPR_U32(ctx, 31, 0x2DC278u);
    ctx->pc = 0x2DC274u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x2E3BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x2e3bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC278u; }
    }
    if (ctx->pc != 0x2DC278u) { return; }
    ctx->pc = 0x2DC278u;
    // 0x2dc278: 0x113100
    ctx->pc = 0x2dc278u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2dc27c: 0x24c60000
    ctx->pc = 0x2dc27cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 0));
    // 0x2dc280: 0x6343c
    ctx->pc = 0x2dc280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2dc284: 0x200202d
    ctx->pc = 0x2dc284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc288: 0x24050051
    ctx->pc = 0x2dc288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 81));
    // 0x2dc28c: 0xc0b8f1a
    ctx->pc = 0x2DC28Cu;
    SET_GPR_U32(ctx, 31, 0x2DC294u);
    ctx->pc = 0x2DC290u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC294u; }
    }
    if (ctx->pc != 0x2DC294u) { return; }
    ctx->pc = 0x2DC294u;
    // 0x2dc294: 0x102d
    ctx->pc = 0x2dc294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc298: 0x2303c
    ctx->pc = 0x2dc298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dc29c: 0x200202d
    ctx->pc = 0x2dc29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2a0: 0x24050053
    ctx->pc = 0x2dc2a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 83));
    // 0x2dc2a4: 0xc0b8f1a
    ctx->pc = 0x2DC2A4u;
    SET_GPR_U32(ctx, 31, 0x2DC2ACu);
    ctx->pc = 0x2DC2A8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2ACu; }
    }
    if (ctx->pc != 0x2DC2ACu) { return; }
    ctx->pc = 0x2DC2ACu;
    // 0x2dc2ac: 0xc0b8ef2
    ctx->pc = 0x2DC2ACu;
    SET_GPR_U32(ctx, 31, 0x2DC2B4u);
    ctx->pc = 0x2DC2B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x2e3bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2B4u; }
    }
    if (ctx->pc != 0x2DC2B4u) { return; }
    ctx->pc = 0x2DC2B4u;
    // 0x2dc2b4: 0x200202d
    ctx->pc = 0x2dc2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2b8: 0xc0b8ee6
    ctx->pc = 0x2DC2B8u;
    SET_GPR_U32(ctx, 31, 0x2DC2C0u);
    ctx->pc = 0x2DC2BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2E3B98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReserve_0x2e3b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2C0u; }
    }
    if (ctx->pc != 0x2DC2C0u) { return; }
    ctx->pc = 0x2DC2C0u;
    // 0x2dc2c0: 0xfc5e0000
    ctx->pc = 0x2dc2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
    // 0x2dc2c4: 0xfc400008
    ctx->pc = 0x2dc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x2dc2c8: 0x200202d
    ctx->pc = 0x2dc2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2cc: 0x2772824
    ctx->pc = 0x2dc2ccu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2dc2d0: 0x24060040
    ctx->pc = 0x2dc2d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dc2d4: 0x382d
    ctx->pc = 0x2dc2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2d8: 0x402d
    ctx->pc = 0x2dc2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2dc: 0xc0b8ea2
    ctx->pc = 0x2DC2DCu;
    SET_GPR_U32(ctx, 31, 0x2DC2E4u);
    ctx->pc = 0x2DC2E0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRef_0x2e3a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2E4u; }
    }
    if (ctx->pc != 0x2DC2E4u) { return; }
    ctx->pc = 0x2DC2E4u;
    // 0x2dc2e4: 0x26310001
    ctx->pc = 0x2dc2e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dc2e8: 0x235102a
    ctx->pc = 0x2dc2e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 21)));
    // 0x2dc2ec: 0x1440ffda
    ctx->pc = 0x2DC2ECu;
    {
        const bool branch_taken_0x2dc2ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DC2F0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1024));
        if (branch_taken_0x2dc2ec) {
            ctx->pc = 0x2DC258u;
            goto label_2dc258;
        }
    }
    ctx->pc = 0x2DC2F4u;
label_2dc2f4:
    // 0x2dc2f4: 0x26520001
    ctx->pc = 0x2dc2f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dc2f8: 0x256102a
    ctx->pc = 0x2dc2f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 22)));
    // 0x2dc2fc: 0x1440ffd0
    ctx->pc = 0x2DC2FCu;
    {
        const bool branch_taken_0x2dc2fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dc2fc) {
            ctx->pc = 0x2DC240u;
            goto label_2dc240;
        }
    }
    ctx->pc = 0x2DC304u;
label_2dc304:
    // 0x2dc304: 0x24020008
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2dc308:
    // 0x2dc308: 0xafa20000
    ctx->pc = 0x2dc308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2dc30c: 0xafa20004
    ctx->pc = 0x2dc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2dc310: 0x8fa30050
    ctx->pc = 0x2dc310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc314: 0x31100
    ctx->pc = 0x2dc314u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dc318: 0xafa20008
    ctx->pc = 0x2dc318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2dc31c: 0x8fa30054
    ctx->pc = 0x2dc31cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2dc320: 0x31100
    ctx->pc = 0x2dc320u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dc324: 0xafa2000c
    ctx->pc = 0x2dc324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2dc328: 0x3c020037
    ctx->pc = 0x2dc328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2dc32c: 0x8c468350
    ctx->pc = 0x2dc32cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294935376)));
    // 0x2dc330: 0x617c2
    ctx->pc = 0x2dc330u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x2dc334: 0xc21021
    ctx->pc = 0x2dc334u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc338: 0x21043
    ctx->pc = 0x2dc338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2dc33c: 0x24050800
    ctx->pc = 0x2dc33cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2dc340: 0xa21023
    ctx->pc = 0x2dc340u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2dc344: 0x21100
    ctx->pc = 0x2dc344u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dc348: 0xafa20010
    ctx->pc = 0x2dc348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2dc34c: 0x3c020037
    ctx->pc = 0x2dc34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2dc350: 0x8c438354
    ctx->pc = 0x2dc350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935380)));
    // 0x2dc354: 0x24640003
    ctx->pc = 0x2dc354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 3));
    // 0x2dc358: 0x2402ffff
    ctx->pc = 0x2dc358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc35c: 0x43102a
    ctx->pc = 0x2dc35cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2dc360: 0x62200b
    ctx->pc = 0x2dc360u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2dc364: 0x42083
    ctx->pc = 0x2dc364u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2dc368: 0xa42823
    ctx->pc = 0x2dc368u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2dc36c: 0x52900
    ctx->pc = 0x2dc36cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2dc370: 0xafa50014
    ctx->pc = 0x2dc370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x2dc374: 0x63100
    ctx->pc = 0x2dc374u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2dc378: 0xafa60018
    ctx->pc = 0x2dc378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2dc37c: 0x317c2
    ctx->pc = 0x2dc37cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
    // 0x2dc380: 0x621821
    ctx->pc = 0x2dc380u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dc384: 0x31843
    ctx->pc = 0x2dc384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2dc388: 0x31900
    ctx->pc = 0x2dc388u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dc38c: 0xafa3001c
    ctx->pc = 0x2dc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2dc390: 0x27b00020
    ctx->pc = 0x2dc390u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc394: 0x200202d
    ctx->pc = 0x2dc394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc398: 0x282d
    ctx->pc = 0x2dc398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc39c: 0x302d
    ctx->pc = 0x2dc39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3a0: 0xc0b8ec8
    ctx->pc = 0x2DC3A0u;
    SET_GPR_U32(ctx, 31, 0x2DC3A8u);
    ctx->pc = 0x2DC3A4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x2e3b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3A8u; }
    }
    if (ctx->pc != 0x2DC3A8u) { return; }
    ctx->pc = 0x2DC3A8u;
    // 0x2dc3a8: 0x200202d
    ctx->pc = 0x2dc3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3ac: 0xc0b8eec
    ctx->pc = 0x2DC3ACu;
    SET_GPR_U32(ctx, 31, 0x2DC3B4u);
    ctx->pc = 0x2DC3B0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x2E3BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x2e3bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3B4u; }
    }
    if (ctx->pc != 0x2DC3B4u) { return; }
    ctx->pc = 0x2DC3B4u;
    // 0x2dc3b4: 0x200202d
    ctx->pc = 0x2dc3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3b8: 0x2405003f
    ctx->pc = 0x2dc3b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x2dc3bc: 0xc0b8f1a
    ctx->pc = 0x2DC3BCu;
    SET_GPR_U32(ctx, 31, 0x2DC3C4u);
    ctx->pc = 0x2DC3C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3C4u; }
    }
    if (ctx->pc != 0x2DC3C4u) { return; }
    ctx->pc = 0x2DC3C4u;
    // 0x2dc3c4: 0x200202d
    ctx->pc = 0x2dc3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3c8: 0x24050014
    ctx->pc = 0x2dc3c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dc3cc: 0xc0b8f1a
    ctx->pc = 0x2DC3CCu;
    SET_GPR_U32(ctx, 31, 0x2DC3D4u);
    ctx->pc = 0x2DC3D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3D4u; }
    }
    if (ctx->pc != 0x2DC3D4u) { return; }
    ctx->pc = 0x2DC3D4u;
    // 0x2dc3d4: 0x200202d
    ctx->pc = 0x2dc3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3d8: 0x2406000a
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc3dc: 0x63438
    ctx->pc = 0x2dc3dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc3e0: 0x34c6a802
    ctx->pc = 0x2dc3e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 43010));
    // 0x2dc3e4: 0x63438
    ctx->pc = 0x2dc3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc3e8: 0x34c69400
    ctx->pc = 0x2dc3e8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 37888));
    // 0x2dc3ec: 0xc0b8f1a
    ctx->pc = 0x2DC3ECu;
    SET_GPR_U32(ctx, 31, 0x2DC3F4u);
    ctx->pc = 0x2DC3F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3F4u; }
    }
    if (ctx->pc != 0x2DC3F4u) { return; }
    ctx->pc = 0x2DC3F4u;
    // 0x2dc3f4: 0x200202d
    ctx->pc = 0x2dc3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3f8: 0x282d
    ctx->pc = 0x2dc3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3fc: 0xc0b8f1a
    ctx->pc = 0x2DC3FCu;
    SET_GPR_U32(ctx, 31, 0x2DC404u);
    ctx->pc = 0x2DC400u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 278));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC404u; }
    }
    if (ctx->pc != 0x2DC404u) { return; }
    ctx->pc = 0x2DC404u;
    // 0x2dc404: 0x8fa20000
    ctx->pc = 0x2dc404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc408: 0x8fa60004
    ctx->pc = 0x2dc408u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dc40c: 0x63438
    ctx->pc = 0x2dc40cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc410: 0x200202d
    ctx->pc = 0x2dc410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc414: 0x24050003
    ctx->pc = 0x2dc414u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc418: 0xc0b8f1a
    ctx->pc = 0x2DC418u;
    SET_GPR_U32(ctx, 31, 0x2DC420u);
    ctx->pc = 0x2DC41Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC420u; }
    }
    if (ctx->pc != 0x2DC420u) { return; }
    ctx->pc = 0x2DC420u;
    // 0x2dc420: 0x8fa20010
    ctx->pc = 0x2dc420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc424: 0x8fa60014
    ctx->pc = 0x2dc424u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2dc428: 0x63438
    ctx->pc = 0x2dc428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc42c: 0x200202d
    ctx->pc = 0x2dc42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc430: 0x24050005
    ctx->pc = 0x2dc430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc434: 0xc0b8f1a
    ctx->pc = 0x2DC434u;
    SET_GPR_U32(ctx, 31, 0x2DC43Cu);
    ctx->pc = 0x2DC438u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC43Cu; }
    }
    if (ctx->pc != 0x2DC43Cu) { return; }
    ctx->pc = 0x2DC43Cu;
    // 0x2dc43c: 0x8fa30000
    ctx->pc = 0x2dc43cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc440: 0x8fa20008
    ctx->pc = 0x2dc440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc444: 0x621821
    ctx->pc = 0x2dc444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dc448: 0x8fa60004
    ctx->pc = 0x2dc448u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dc44c: 0x8fa2000c
    ctx->pc = 0x2dc44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2dc450: 0xc23021
    ctx->pc = 0x2dc450u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc454: 0x63438
    ctx->pc = 0x2dc454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc458: 0x200202d
    ctx->pc = 0x2dc458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc45c: 0x24050003
    ctx->pc = 0x2dc45cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc460: 0xc0b8f1a
    ctx->pc = 0x2DC460u;
    SET_GPR_U32(ctx, 31, 0x2DC468u);
    ctx->pc = 0x2DC464u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC468u; }
    }
    if (ctx->pc != 0x2DC468u) { return; }
    ctx->pc = 0x2DC468u;
    // 0x2dc468: 0x8fa30010
    ctx->pc = 0x2dc468u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc46c: 0x8fa20018
    ctx->pc = 0x2dc46cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc470: 0x621821
    ctx->pc = 0x2dc470u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dc474: 0x8fa60014
    ctx->pc = 0x2dc474u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2dc478: 0x8fa2001c
    ctx->pc = 0x2dc478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2dc47c: 0xc23021
    ctx->pc = 0x2dc47cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc480: 0x63438
    ctx->pc = 0x2dc480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2dc484: 0x200202d
    ctx->pc = 0x2dc484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc488: 0x24050005
    ctx->pc = 0x2dc488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc48c: 0xc0b8f1a
    ctx->pc = 0x2DC48Cu;
    SET_GPR_U32(ctx, 31, 0x2DC494u);
    ctx->pc = 0x2DC490u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x2E3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x2e3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC494u; }
    }
    if (ctx->pc != 0x2DC494u) { return; }
    ctx->pc = 0x2DC494u;
    // 0x2dc494: 0xc0b8ef2
    ctx->pc = 0x2DC494u;
    SET_GPR_U32(ctx, 31, 0x2DC49Cu);
    ctx->pc = 0x2DC498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x2e3bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC49Cu; }
    }
    if (ctx->pc != 0x2DC49Cu) { return; }
    ctx->pc = 0x2DC49Cu;
    // 0x2dc49c: 0xc0b8e6e
    ctx->pc = 0x2DC49Cu;
    SET_GPR_U32(ctx, 31, 0x2DC4A4u);
    ctx->pc = 0x2DC4A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E39B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x2e39b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4A4u; }
    }
    if (ctx->pc != 0x2DC4A4u) { return; }
    ctx->pc = 0x2DC4A4u;
    // 0x2dc4a4: 0xdfbf00f0
    ctx->pc = 0x2dc4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dc4a8: 0xdfbe00e0
    ctx->pc = 0x2dc4a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2dc4ac: 0xdfb700d0
    ctx->pc = 0x2dc4acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dc4b0: 0xdfb600c0
    ctx->pc = 0x2dc4b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dc4b4: 0xdfb500b0
    ctx->pc = 0x2dc4b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dc4b8: 0xdfb400a0
    ctx->pc = 0x2dc4b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dc4bc: 0xdfb30090
    ctx->pc = 0x2dc4bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dc4c0: 0xdfb20080
    ctx->pc = 0x2dc4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dc4c4: 0xdfb10070
    ctx->pc = 0x2dc4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc4c8: 0xdfb00060
    ctx->pc = 0x2dc4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc4cc: 0x3e00008
    ctx->pc = 0x2DC4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC4D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DC240u: goto label_2dc240;
            case 0x2DC258u: goto label_2dc258;
            case 0x2DC2F4u: goto label_2dc2f4;
            case 0x2DC304u: goto label_2dc304;
            case 0x2DC308u: goto label_2dc308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DC4D4u;
}
