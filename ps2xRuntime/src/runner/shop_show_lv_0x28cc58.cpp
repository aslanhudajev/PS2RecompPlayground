#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shop_show_lv
// Address: 0x28cc58 - 0x28d5c8
void shop_show_lv_0x28cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28cc58u;

    // 0x28cc58: 0x27bdff00
    ctx->pc = 0x28cc58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x28cc5c: 0xffbf00c0
    ctx->pc = 0x28cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x28cc60: 0xffbe00b0
    ctx->pc = 0x28cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x28cc64: 0xffb700a0
    ctx->pc = 0x28cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x28cc68: 0xffb60090
    ctx->pc = 0x28cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x28cc6c: 0xffb50080
    ctx->pc = 0x28cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x28cc70: 0xffb40070
    ctx->pc = 0x28cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x28cc74: 0xffb30060
    ctx->pc = 0x28cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x28cc78: 0xffb20050
    ctx->pc = 0x28cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28cc7c: 0xffb10040
    ctx->pc = 0x28cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x28cc80: 0xffb00030
    ctx->pc = 0x28cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28cc84: 0xe7b800f0
    ctx->pc = 0x28cc84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x28cc88: 0xe7b700e8
    ctx->pc = 0x28cc88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x28cc8c: 0xe7b600e0
    ctx->pc = 0x28cc8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x28cc90: 0xe7b500d8
    ctx->pc = 0x28cc90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x28cc94: 0xe7b400d0
    ctx->pc = 0x28cc94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x28cc98: 0x80882d
    ctx->pc = 0x28cc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc9c: 0xafa50020
    ctx->pc = 0x28cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28cca0: 0x8e22000c
    ctx->pc = 0x28cca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28cca4: 0x24030018
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28cca8: 0x431018
    ctx->pc = 0x28cca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28ccac: 0x24421a38
    ctx->pc = 0x28ccacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6712));
    // 0x28ccb0: 0x2221021
    ctx->pc = 0x28ccb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28ccb4: 0xafa20024
    ctx->pc = 0x28ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x28ccb8: 0x3c020035
    ctx->pc = 0x28ccb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ccbc: 0x2442b3e0
    ctx->pc = 0x28ccbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x28ccc0: 0x8e230000
    ctx->pc = 0x28ccc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ccc4: 0x31880
    ctx->pc = 0x28ccc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ccc8: 0x621021
    ctx->pc = 0x28ccc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cccc: 0x8c440000
    ctx->pc = 0x28ccccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ccd0: 0x24950008
    ctx->pc = 0x28ccd0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 4), 8));
    // 0x28ccd4: 0x3c020035
    ctx->pc = 0x28ccd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ccd8: 0x2442b3f0
    ctx->pc = 0x28ccd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947824));
    // 0x28ccdc: 0x621821
    ctx->pc = 0x28ccdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cce0: 0x8c7e0000
    ctx->pc = 0x28cce0u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28cce4: 0x24960058
    ctx->pc = 0x28cce4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 4), 88));
    // 0x28cce8: 0x24120020
    ctx->pc = 0x28cce8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
    // 0x28ccec: 0x2417003c
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28ccf0: 0xafa00028
    ctx->pc = 0x28ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x28ccf4: 0x3c013ef5
    ctx->pc = 0x28ccf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16117 << 16));
    // 0x28ccf8: 0x3421c28f
    ctx->pc = 0x28ccf8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x28ccfc: 0x4481a000
    ctx->pc = 0x28ccfcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x28cd00: 0x96340988
    ctx->pc = 0x28cd00u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2440)));
    // 0x28cd04: 0x8fa20024
    ctx->pc = 0x28cd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x28cd08: 0xc08d20c
    ctx->pc = 0x28CD08u;
    SET_GPR_U32(ctx, 31, 0x28CD10u);
    ctx->pc = 0x28CD0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD10u; }
    }
    if (ctx->pc != 0x28CD10u) { return; }
    ctx->pc = 0x28CD10u;
    // 0x28cd10: 0xafa2002c
    ctx->pc = 0x28cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x28cd14: 0x8fa30020
    ctx->pc = 0x28cd14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cd18: 0x14600009
    ctx->pc = 0x28CD18u;
    {
        const bool branch_taken_0x28cd18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x28CD1Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28cd18) {
            ctx->pc = 0x28CD40u;
            goto label_28cd40;
        }
    }
    ctx->pc = 0x28CD20u;
    // 0x28cd20: 0x8e222ac0
    ctx->pc = 0x28cd20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28cd24: 0x8fa4002c
    ctx->pc = 0x28cd24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28cd28: 0x14820003
    ctx->pc = 0x28CD28u;
    {
        const bool branch_taken_0x28cd28 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x28CD2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28cd28) {
            ctx->pc = 0x28CD38u;
            goto label_28cd38;
        }
    }
    ctx->pc = 0x28CD30u;
    // 0x28cd30: 0x10000214
    ctx->pc = 0x28CD30u;
    {
        const bool branch_taken_0x28cd30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CD34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28cd30) {
            ctx->pc = 0x28D584u;
            goto label_28d584;
        }
    }
    ctx->pc = 0x28CD38u;
label_28cd38:
    // 0x28cd38: 0x10000004
    ctx->pc = 0x28CD38u;
    {
        const bool branch_taken_0x28cd38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CD3Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 90));
        if (branch_taken_0x28cd38) {
            ctx->pc = 0x28CD4Cu;
            goto label_28cd4c;
        }
    }
    ctx->pc = 0x28CD40u;
label_28cd40:
    // 0x28cd40: 0x2413001e
    ctx->pc = 0x28cd40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 30));
    // 0x28cd44: 0x8e222ac0
    ctx->pc = 0x28cd44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28cd48: 0xafa2002c
    ctx->pc = 0x28cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_28cd4c:
    // 0x28cd4c: 0x8e220988
    ctx->pc = 0x28cd4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2440)));
    // 0x28cd50: 0x1440000b
    ctx->pc = 0x28CD50u;
    {
        const bool branch_taken_0x28cd50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28CD54u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61439));
        if (branch_taken_0x28cd50) {
            ctx->pc = 0x28CD80u;
            goto label_28cd80;
        }
    }
    ctx->pc = 0x28CD58u;
    // 0x28cd58: 0x8fa30020
    ctx->pc = 0x28cd58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cd5c: 0x54600005
    ctx->pc = 0x28CD5Cu;
    {
        const bool branch_taken_0x28cd5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x28cd5c) {
            ctx->pc = 0x28CD60u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2440)));
            ctx->pc = 0x28CD74u;
            goto label_28cd74;
        }
    }
    ctx->pc = 0x28CD64u;
    // 0x28cd64: 0x8e240000
    ctx->pc = 0x28cd64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28cd68: 0xc09836c
    ctx->pc = 0x28CD68u;
    SET_GPR_U32(ctx, 31, 0x28CD70u);
    ctx->pc = 0x28CD6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x260DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGainedLevel_0x260db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD70u; }
    }
    if (ctx->pc != 0x28CD70u) { return; }
    ctx->pc = 0x28CD70u;
    // 0x28cd70: 0x8e220988
    ctx->pc = 0x28cd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2440)));
label_28cd74:
    // 0x28cd74: 0x24420001
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cd78: 0xae220988
    ctx->pc = 0x28cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2440), GPR_U32(ctx, 2));
    // 0x28cd7c: 0x3402efff
    ctx->pc = 0x28cd7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61439));
label_28cd80:
    // 0x28cd80: 0x54102a
    ctx->pc = 0x28cd80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x28cd84: 0x14400006
    ctx->pc = 0x28CD84u;
    {
        const bool branch_taken_0x28cd84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28CD88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28cd84) {
            ctx->pc = 0x28CDA0u;
            goto label_28cda0;
        }
    }
    ctx->pc = 0x28CD8Cu;
    // 0x28cd8c: 0x3c020031
    ctx->pc = 0x28cd8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28cd90: 0x8e230988
    ctx->pc = 0x28cd90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2440)));
    // 0x28cd94: 0x8c42ffbc
    ctx->pc = 0x28cd94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x28cd98: 0x621821
    ctx->pc = 0x28cd98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cd9c: 0xae230988
    ctx->pc = 0x28cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2440), GPR_U32(ctx, 3));
label_28cda0:
    // 0x28cda0: 0x3c05003b
    ctx->pc = 0x28cda0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28cda4: 0x24a5db48
    ctx->pc = 0x28cda4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957896));
    // 0x28cda8: 0xc0b6252
    ctx->pc = 0x28CDA8u;
    SET_GPR_U32(ctx, 31, 0x28CDB0u);
    ctx->pc = 0x28CDACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDB0u; }
    }
    if (ctx->pc != 0x28CDB0u) { return; }
    ctx->pc = 0x28CDB0u;
    // 0x28cdb0: 0x12000008
    ctx->pc = 0x28CDB0u;
    {
        const bool branch_taken_0x28cdb0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CDB4u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
        if (branch_taken_0x28cdb0) {
            ctx->pc = 0x28CDD4u;
            goto label_28cdd4;
        }
    }
    ctx->pc = 0x28CDB8u;
    // 0x28cdb8: 0x240282d
    ctx->pc = 0x28cdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdbc: 0x3c013f40
    ctx->pc = 0x28cdbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x28cdc0: 0x44816000
    ctx->pc = 0x28cdc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28cdc4: 0xc080a9a
    ctx->pc = 0x28CDC4u;
    SET_GPR_U32(ctx, 31, 0x28CDCCu);
    ctx->pc = 0x28CDC8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDCCu; }
    }
    if (ctx->pc != 0x28CDCCu) { return; }
    ctx->pc = 0x28CDCCu;
    // 0x28cdcc: 0x1000000a
    ctx->pc = 0x28CDCCu;
    {
        const bool branch_taken_0x28cdcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CDD0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x28cdcc) {
            ctx->pc = 0x28CDF8u;
            goto label_28cdf8;
        }
    }
    ctx->pc = 0x28CDD4u;
label_28cdd4:
    // 0x28cdd4: 0x240282d
    ctx->pc = 0x28cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdd8: 0x24060006
    ctx->pc = 0x28cdd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28cddc: 0x3c0700ff
    ctx->pc = 0x28cddcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cde0: 0x34e7ffff
    ctx->pc = 0x28cde0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cde4: 0x3c013f40
    ctx->pc = 0x28cde4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x28cde8: 0x44816000
    ctx->pc = 0x28cde8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28cdec: 0xc080510
    ctx->pc = 0x28CDECu;
    SET_GPR_U32(ctx, 31, 0x28CDF4u);
    ctx->pc = 0x28CDF0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDF4u; }
    }
    if (ctx->pc != 0x28CDF4u) { return; }
    ctx->pc = 0x28CDF4u;
    // 0x28cdf4: 0x26520020
    ctx->pc = 0x28cdf4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 32));
label_28cdf8:
    // 0x28cdf8: 0x8e232ac0
    ctx->pc = 0x28cdf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28cdfc: 0x2402000a
    ctx->pc = 0x28cdfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x28ce00: 0x62001a
    ctx->pc = 0x28ce00u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28ce04: 0x2012
    ctx->pc = 0x28ce04u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x28ce08: 0x50400001
    ctx->pc = 0x28CE08u;
    {
        const bool branch_taken_0x28ce08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28ce08) {
            ctx->pc = 0x28CE0Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28CE10u;
            goto label_28ce10;
        }
    }
    ctx->pc = 0x28CE10u;
label_28ce10:
    // 0x28ce10: 0x24020063
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x28ce14: 0x14620004
    ctx->pc = 0x28CE14u;
    {
        const bool branch_taken_0x28ce14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28CE18u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ce14) {
            ctx->pc = 0x28CE28u;
            goto label_28ce28;
        }
    }
    ctx->pc = 0x28CE1Cu;
    // 0x28ce1c: 0x24040015
    ctx->pc = 0x28ce1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x28ce20: 0x10000006
    ctx->pc = 0x28CE20u;
    {
        const bool branch_taken_0x28ce20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CE24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ce20) {
            ctx->pc = 0x28CE3Cu;
            goto label_28ce3c;
        }
    }
    ctx->pc = 0x28CE28u;
label_28ce28:
    // 0x28ce28: 0x8e222ac0
    ctx->pc = 0x28ce28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28ce2c: 0x2842000a
    ctx->pc = 0x28ce2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x28ce30: 0x10400006
    ctx->pc = 0x28CE30u;
    {
        const bool branch_taken_0x28ce30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CE34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x28ce30) {
            ctx->pc = 0x28CE4Cu;
            goto label_28ce4c;
        }
    }
    ctx->pc = 0x28CE38u;
    // 0x28ce38: 0x8e25000c
    ctx->pc = 0x28ce38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28ce3c:
    // 0x28ce3c: 0xc08065e
    ctx->pc = 0x28CE3Cu;
    SET_GPR_U32(ctx, 31, 0x28CE44u);
    ctx->pc = 0x28CE40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE44u; }
    }
    if (ctx->pc != 0x28CE44u) { return; }
    ctx->pc = 0x28CE44u;
    // 0x28ce44: 0x10000007
    ctx->pc = 0x28CE44u;
    {
        const bool branch_taken_0x28ce44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CE48u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
        if (branch_taken_0x28ce44) {
            ctx->pc = 0x28CE64u;
            goto label_28ce64;
        }
    }
    ctx->pc = 0x28CE4Cu;
label_28ce4c:
    // 0x28ce4c: 0x202d
    ctx->pc = 0x28ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce50: 0x8e25000c
    ctx->pc = 0x28ce50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ce54: 0x63043
    ctx->pc = 0x28ce54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x28ce58: 0xc0806a8
    ctx->pc = 0x28CE58u;
    SET_GPR_U32(ctx, 31, 0x28CE60u);
    ctx->pc = 0x28CE5Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListText_0x201aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE60u; }
    }
    if (ctx->pc != 0x28CE60u) { return; }
    ctx->pc = 0x28CE60u;
    // 0x28ce60: 0x1e2023
    ctx->pc = 0x28ce60u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_28ce64:
    // 0x28ce64: 0x240282d
    ctx->pc = 0x28ce64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce68: 0x24060006
    ctx->pc = 0x28ce68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ce6c: 0x3c0700ff
    ctx->pc = 0x28ce6cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28ce70: 0x34e7ffff
    ctx->pc = 0x28ce70u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28ce74: 0x3c013f19
    ctx->pc = 0x28ce74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x28ce78: 0x3421999a
    ctx->pc = 0x28ce78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x28ce7c: 0x44816000
    ctx->pc = 0x28ce7cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28ce80: 0xc080510
    ctx->pc = 0x28CE80u;
    SET_GPR_U32(ctx, 31, 0x28CE88u);
    ctx->pc = 0x28CE84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE88u; }
    }
    if (ctx->pc != 0x28CE88u) { return; }
    ctx->pc = 0x28CE88u;
    // 0x28ce88: 0x8e302ac0
    ctx->pc = 0x28ce88u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28ce8c: 0x8fa2002c
    ctx->pc = 0x28ce8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28ce90: 0xae222ac0
    ctx->pc = 0x28ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10944), GPR_U32(ctx, 2));
    // 0x28ce94: 0x220202d
    ctx->pc = 0x28ce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce98: 0x8e25000c
    ctx->pc = 0x28ce98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ce9c: 0xc08af08
    ctx->pc = 0x28CE9Cu;
    SET_GPR_U32(ctx, 31, 0x28CEA4u);
    ctx->pc = 0x28CEA0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEA4u; }
    }
    if (ctx->pc != 0x28CEA4u) { return; }
    ctx->pc = 0x28CEA4u;
    // 0x28cea4: 0xc6210108
    ctx->pc = 0x28cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cea8: 0xc620098c
    ctx->pc = 0x28cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ceac: 0x46000d41
    ctx->pc = 0x28ceacu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28ceb0: 0xc621010c
    ctx->pc = 0x28ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ceb4: 0xc6200990
    ctx->pc = 0x28ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ceb8: 0x46000d81
    ctx->pc = 0x28ceb8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28cebc: 0xc6210110
    ctx->pc = 0x28cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cec0: 0xc6200994
    ctx->pc = 0x28cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cec4: 0x46000dc1
    ctx->pc = 0x28cec4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28cec8: 0xc6210114
    ctx->pc = 0x28cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cecc: 0xc6200998
    ctx->pc = 0x28ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ced0: 0x46000e01
    ctx->pc = 0x28ced0u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28ced4: 0xae302ac0
    ctx->pc = 0x28ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10944), GPR_U32(ctx, 16));
    // 0x28ced8: 0x220202d
    ctx->pc = 0x28ced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cedc: 0x8e25000c
    ctx->pc = 0x28cedcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28cee0: 0xc08af08
    ctx->pc = 0x28CEE0u;
    SET_GPR_U32(ctx, 31, 0x28CEE8u);
    ctx->pc = 0x28CEE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEE8u; }
    }
    if (ctx->pc != 0x28CEE8u) { return; }
    ctx->pc = 0x28CEE8u;
    // 0x28cee8: 0x26520020
    ctx->pc = 0x28cee8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 32));
    // 0x28ceec: 0xc6200108
    ctx->pc = 0x28ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cef0: 0x4600a832
    ctx->pc = 0x28cef0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cef4: 0x0
    ctx->pc = 0x28cef4u;
    // NOP
    // 0x28cef8: 0x45000002
    ctx->pc = 0x28CEF8u;
    {
        const bool branch_taken_0x28cef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CEFCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28cef8) {
            ctx->pc = 0x28CF04u;
            goto label_28cf04;
        }
    }
    ctx->pc = 0x28CF00u;
    // 0x28cf00: 0x802d
    ctx->pc = 0x28cf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cf04:
    // 0x28cf04: 0x1200000d
    ctx->pc = 0x28CF04u;
    {
        const bool branch_taken_0x28cf04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CF08u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28cf04) {
            ctx->pc = 0x28CF3Cu;
            goto label_28cf3c;
        }
    }
    ctx->pc = 0x28CF0Cu;
    // 0x28cf0c: 0x1040000b
    ctx->pc = 0x28CF0Cu;
    {
        const bool branch_taken_0x28cf0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CF10u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        if (branch_taken_0x28cf0c) {
            ctx->pc = 0x28CF3Cu;
            goto label_28cf3c;
        }
    }
    ctx->pc = 0x28CF14u;
    // 0x28cf14: 0x282102a
    ctx->pc = 0x28cf14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x28cf18: 0x10400008
    ctx->pc = 0x28CF18u;
    {
        const bool branch_taken_0x28cf18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CF1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28cf18) {
            ctx->pc = 0x28CF3Cu;
            goto label_28cf3c;
        }
    }
    ctx->pc = 0x28CF20u;
    // 0x28cf20: 0x240282d
    ctx->pc = 0x28cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf24: 0x4600a306
    ctx->pc = 0x28cf24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28cf28: 0x3c06003b
    ctx->pc = 0x28cf28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28cf2c: 0xc080a9a
    ctx->pc = 0x28CF2Cu;
    SET_GPR_U32(ctx, 31, 0x28CF34u);
    ctx->pc = 0x28CF30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957912));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF34u; }
    }
    if (ctx->pc != 0x28CF34u) { return; }
    ctx->pc = 0x28CF34u;
    // 0x28cf34: 0x1000000a
    ctx->pc = 0x28CF34u;
    {
        const bool branch_taken_0x28cf34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28cf34) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28CF3Cu;
label_28cf3c:
    // 0x28cf3c: 0x2a0202d
    ctx->pc = 0x28cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf40: 0x240282d
    ctx->pc = 0x28cf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf44: 0x24060006
    ctx->pc = 0x28cf44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28cf48: 0x3c0700ff
    ctx->pc = 0x28cf48u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cf4c: 0x34e7ffff
    ctx->pc = 0x28cf4cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cf50: 0x4600a306
    ctx->pc = 0x28cf50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28cf54: 0x3c08003b
    ctx->pc = 0x28cf54u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cf58: 0xc080510
    ctx->pc = 0x28CF58u;
    SET_GPR_U32(ctx, 31, 0x28CF60u);
    ctx->pc = 0x28CF5Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957912));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF60u; }
    }
    if (ctx->pc != 0x28CF60u) { return; }
    ctx->pc = 0x28CF60u;
label_28cf60:
    // 0x28cf60: 0x12000010
    ctx->pc = 0x28CF60u;
    {
        const bool branch_taken_0x28cf60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CF64u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28cf60) {
            ctx->pc = 0x28CFA4u;
            goto label_28cfa4;
        }
    }
    ctx->pc = 0x28CF68u;
    // 0x28cf68: 0x1040000e
    ctx->pc = 0x28CF68u;
    {
        const bool branch_taken_0x28cf68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CF6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28cf68) {
            ctx->pc = 0x28CFA4u;
            goto label_28cfa4;
        }
    }
    ctx->pc = 0x28CF70u;
    // 0x28cf70: 0xc6200108
    ctx->pc = 0x28cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf74: 0x3c05003b
    ctx->pc = 0x28cf74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28cf78: 0x46000064
    ctx->pc = 0x28cf78u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28cf7c: 0x44060800
    ctx->pc = 0x28cf7cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x28cf80: 0xc0b6252
    ctx->pc = 0x28CF80u;
    SET_GPR_U32(ctx, 31, 0x28CF88u);
    ctx->pc = 0x28CF84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF88u; }
    }
    if (ctx->pc != 0x28CF88u) { return; }
    ctx->pc = 0x28CF88u;
    // 0x28cf88: 0x2c0202d
    ctx->pc = 0x28cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf8c: 0x240282d
    ctx->pc = 0x28cf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf90: 0x4600a306
    ctx->pc = 0x28cf90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28cf94: 0xc080a9a
    ctx->pc = 0x28CF94u;
    SET_GPR_U32(ctx, 31, 0x28CF9Cu);
    ctx->pc = 0x28CF98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF9Cu; }
    }
    if (ctx->pc != 0x28CF9Cu) { return; }
    ctx->pc = 0x28CF9Cu;
    // 0x28cf9c: 0x10000010
    ctx->pc = 0x28CF9Cu;
    {
        const bool branch_taken_0x28cf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CFA0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x28cf9c) {
            ctx->pc = 0x28CFE0u;
            goto label_28cfe0;
        }
    }
    ctx->pc = 0x28CFA4u;
label_28cfa4:
    // 0x28cfa4: 0x3a0202d
    ctx->pc = 0x28cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfa8: 0x3c05003b
    ctx->pc = 0x28cfa8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28cfac: 0x4600a824
    ctx->pc = 0x28cfacu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[21]);
    // 0x28cfb0: 0x44060000
    ctx->pc = 0x28cfb0u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x28cfb4: 0xc0b6252
    ctx->pc = 0x28CFB4u;
    SET_GPR_U32(ctx, 31, 0x28CFBCu);
    ctx->pc = 0x28CFB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CFBCu; }
    }
    if (ctx->pc != 0x28CFBCu) { return; }
    ctx->pc = 0x28CFBCu;
    // 0x28cfbc: 0x2c0202d
    ctx->pc = 0x28cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfc0: 0x240282d
    ctx->pc = 0x28cfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfc4: 0x24060006
    ctx->pc = 0x28cfc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28cfc8: 0x3c0700ff
    ctx->pc = 0x28cfc8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cfcc: 0x34e7ffff
    ctx->pc = 0x28cfccu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cfd0: 0x4600a306
    ctx->pc = 0x28cfd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28cfd4: 0xc080510
    ctx->pc = 0x28CFD4u;
    SET_GPR_U32(ctx, 31, 0x28CFDCu);
    ctx->pc = 0x28CFD8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CFDCu; }
    }
    if (ctx->pc != 0x28CFDCu) { return; }
    ctx->pc = 0x28CFDCu;
    // 0x28cfdc: 0x26520014
    ctx->pc = 0x28cfdcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_28cfe0:
    // 0x28cfe0: 0x2771021
    ctx->pc = 0x28cfe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x28cfe4: 0x50980b
    ctx->pc = 0x28cfe4u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x28cfe8: 0xc620010c
    ctx->pc = 0x28cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cfec: 0x4600b032
    ctx->pc = 0x28cfecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cff0: 0x0
    ctx->pc = 0x28cff0u;
    // NOP
    // 0x28cff4: 0x45000002
    ctx->pc = 0x28CFF4u;
    {
        const bool branch_taken_0x28cff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CFF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28cff4) {
            ctx->pc = 0x28D000u;
            goto label_28d000;
        }
    }
    ctx->pc = 0x28CFFCu;
    // 0x28cffc: 0x802d
    ctx->pc = 0x28cffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d000:
    // 0x28d000: 0x1200000d
    ctx->pc = 0x28D000u;
    {
        const bool branch_taken_0x28d000 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D004u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d000) {
            ctx->pc = 0x28D038u;
            goto label_28d038;
        }
    }
    ctx->pc = 0x28D008u;
    // 0x28d008: 0x1040000b
    ctx->pc = 0x28D008u;
    {
        const bool branch_taken_0x28d008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D00Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        if (branch_taken_0x28d008) {
            ctx->pc = 0x28D038u;
            goto label_28d038;
        }
    }
    ctx->pc = 0x28D010u;
    // 0x28d010: 0x282102a
    ctx->pc = 0x28d010u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x28d014: 0x10400008
    ctx->pc = 0x28D014u;
    {
        const bool branch_taken_0x28d014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d014) {
            ctx->pc = 0x28D038u;
            goto label_28d038;
        }
    }
    ctx->pc = 0x28D01Cu;
    // 0x28d01c: 0x240282d
    ctx->pc = 0x28d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d020: 0x4600a306
    ctx->pc = 0x28d020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d024: 0x3c06003b
    ctx->pc = 0x28d024u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d028: 0xc080a9a
    ctx->pc = 0x28D028u;
    SET_GPR_U32(ctx, 31, 0x28D030u);
    ctx->pc = 0x28D02Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957928));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D030u; }
    }
    if (ctx->pc != 0x28D030u) { return; }
    ctx->pc = 0x28D030u;
    // 0x28d030: 0x1000000a
    ctx->pc = 0x28D030u;
    {
        const bool branch_taken_0x28d030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28d030) {
            ctx->pc = 0x28D05Cu;
            goto label_28d05c;
        }
    }
    ctx->pc = 0x28D038u;
label_28d038:
    // 0x28d038: 0x2a0202d
    ctx->pc = 0x28d038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d03c: 0x240282d
    ctx->pc = 0x28d03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d040: 0x24060006
    ctx->pc = 0x28d040u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d044: 0x3c0700ff
    ctx->pc = 0x28d044u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d048: 0x34e7ffff
    ctx->pc = 0x28d048u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d04c: 0x4600a306
    ctx->pc = 0x28d04cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d050: 0x3c08003b
    ctx->pc = 0x28d050u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d054: 0xc080510
    ctx->pc = 0x28D054u;
    SET_GPR_U32(ctx, 31, 0x28D05Cu);
    ctx->pc = 0x28D058u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957928));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D05Cu; }
    }
    if (ctx->pc != 0x28D05Cu) { return; }
    ctx->pc = 0x28D05Cu;
label_28d05c:
    // 0x28d05c: 0x12000010
    ctx->pc = 0x28D05Cu;
    {
        const bool branch_taken_0x28d05c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D060u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d05c) {
            ctx->pc = 0x28D0A0u;
            goto label_28d0a0;
        }
    }
    ctx->pc = 0x28D064u;
    // 0x28d064: 0x1040000e
    ctx->pc = 0x28D064u;
    {
        const bool branch_taken_0x28d064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D068u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d064) {
            ctx->pc = 0x28D0A0u;
            goto label_28d0a0;
        }
    }
    ctx->pc = 0x28D06Cu;
    // 0x28d06c: 0xc620010c
    ctx->pc = 0x28d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d070: 0x3c05003b
    ctx->pc = 0x28d070u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d074: 0x46000064
    ctx->pc = 0x28d074u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d078: 0x44060800
    ctx->pc = 0x28d078u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x28d07c: 0xc0b6252
    ctx->pc = 0x28D07Cu;
    SET_GPR_U32(ctx, 31, 0x28D084u);
    ctx->pc = 0x28D080u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D084u; }
    }
    if (ctx->pc != 0x28D084u) { return; }
    ctx->pc = 0x28D084u;
    // 0x28d084: 0x2c0202d
    ctx->pc = 0x28d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d088: 0x240282d
    ctx->pc = 0x28d088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d08c: 0x4600a306
    ctx->pc = 0x28d08cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d090: 0xc080a9a
    ctx->pc = 0x28D090u;
    SET_GPR_U32(ctx, 31, 0x28D098u);
    ctx->pc = 0x28D094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D098u; }
    }
    if (ctx->pc != 0x28D098u) { return; }
    ctx->pc = 0x28D098u;
    // 0x28d098: 0x10000010
    ctx->pc = 0x28D098u;
    {
        const bool branch_taken_0x28d098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D09Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x28d098) {
            ctx->pc = 0x28D0DCu;
            goto label_28d0dc;
        }
    }
    ctx->pc = 0x28D0A0u;
label_28d0a0:
    // 0x28d0a0: 0x3a0202d
    ctx->pc = 0x28d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0a4: 0x3c05003b
    ctx->pc = 0x28d0a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d0a8: 0x4600b024
    ctx->pc = 0x28d0a8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[22]);
    // 0x28d0ac: 0x44060000
    ctx->pc = 0x28d0acu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x28d0b0: 0xc0b6252
    ctx->pc = 0x28D0B0u;
    SET_GPR_U32(ctx, 31, 0x28D0B8u);
    ctx->pc = 0x28D0B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0B8u; }
    }
    if (ctx->pc != 0x28D0B8u) { return; }
    ctx->pc = 0x28D0B8u;
    // 0x28d0b8: 0x2c0202d
    ctx->pc = 0x28d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0bc: 0x240282d
    ctx->pc = 0x28d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0c0: 0x24060006
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d0c4: 0x3c0700ff
    ctx->pc = 0x28d0c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d0c8: 0x34e7ffff
    ctx->pc = 0x28d0c8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d0cc: 0x4600a306
    ctx->pc = 0x28d0ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d0d0: 0xc080510
    ctx->pc = 0x28D0D0u;
    SET_GPR_U32(ctx, 31, 0x28D0D8u);
    ctx->pc = 0x28D0D4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0D8u; }
    }
    if (ctx->pc != 0x28D0D8u) { return; }
    ctx->pc = 0x28D0D8u;
    // 0x28d0d8: 0x26520014
    ctx->pc = 0x28d0d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_28d0dc:
    // 0x28d0dc: 0x2771021
    ctx->pc = 0x28d0dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x28d0e0: 0x50980b
    ctx->pc = 0x28d0e0u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x28d0e4: 0xc6200110
    ctx->pc = 0x28d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0e8: 0x4600b832
    ctx->pc = 0x28d0e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d0ec: 0x0
    ctx->pc = 0x28d0ecu;
    // NOP
    // 0x28d0f0: 0x45000002
    ctx->pc = 0x28D0F0u;
    {
        const bool branch_taken_0x28d0f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D0F4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28d0f0) {
            ctx->pc = 0x28D0FCu;
            goto label_28d0fc;
        }
    }
    ctx->pc = 0x28D0F8u;
    // 0x28d0f8: 0x802d
    ctx->pc = 0x28d0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d0fc:
    // 0x28d0fc: 0x1200000d
    ctx->pc = 0x28D0FCu;
    {
        const bool branch_taken_0x28d0fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D100u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d0fc) {
            ctx->pc = 0x28D134u;
            goto label_28d134;
        }
    }
    ctx->pc = 0x28D104u;
    // 0x28d104: 0x1040000b
    ctx->pc = 0x28D104u;
    {
        const bool branch_taken_0x28d104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D108u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        if (branch_taken_0x28d104) {
            ctx->pc = 0x28D134u;
            goto label_28d134;
        }
    }
    ctx->pc = 0x28D10Cu;
    // 0x28d10c: 0x282102a
    ctx->pc = 0x28d10cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x28d110: 0x10400008
    ctx->pc = 0x28D110u;
    {
        const bool branch_taken_0x28d110 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D114u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d110) {
            ctx->pc = 0x28D134u;
            goto label_28d134;
        }
    }
    ctx->pc = 0x28D118u;
    // 0x28d118: 0x240282d
    ctx->pc = 0x28d118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d11c: 0x4600a306
    ctx->pc = 0x28d11cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d120: 0x3c06003b
    ctx->pc = 0x28d120u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d124: 0xc080a9a
    ctx->pc = 0x28D124u;
    SET_GPR_U32(ctx, 31, 0x28D12Cu);
    ctx->pc = 0x28D128u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957936));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D12Cu; }
    }
    if (ctx->pc != 0x28D12Cu) { return; }
    ctx->pc = 0x28D12Cu;
    // 0x28d12c: 0x1000000a
    ctx->pc = 0x28D12Cu;
    {
        const bool branch_taken_0x28d12c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28d12c) {
            ctx->pc = 0x28D158u;
            goto label_28d158;
        }
    }
    ctx->pc = 0x28D134u;
label_28d134:
    // 0x28d134: 0x2a0202d
    ctx->pc = 0x28d134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d138: 0x240282d
    ctx->pc = 0x28d138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d13c: 0x24060006
    ctx->pc = 0x28d13cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d140: 0x3c0700ff
    ctx->pc = 0x28d140u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d144: 0x34e7ffff
    ctx->pc = 0x28d144u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d148: 0x4600a306
    ctx->pc = 0x28d148u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d14c: 0x3c08003b
    ctx->pc = 0x28d14cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d150: 0xc080510
    ctx->pc = 0x28D150u;
    SET_GPR_U32(ctx, 31, 0x28D158u);
    ctx->pc = 0x28D154u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957936));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D158u; }
    }
    if (ctx->pc != 0x28D158u) { return; }
    ctx->pc = 0x28D158u;
label_28d158:
    // 0x28d158: 0x12000010
    ctx->pc = 0x28D158u;
    {
        const bool branch_taken_0x28d158 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D15Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d158) {
            ctx->pc = 0x28D19Cu;
            goto label_28d19c;
        }
    }
    ctx->pc = 0x28D160u;
    // 0x28d160: 0x1040000e
    ctx->pc = 0x28D160u;
    {
        const bool branch_taken_0x28d160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D164u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d160) {
            ctx->pc = 0x28D19Cu;
            goto label_28d19c;
        }
    }
    ctx->pc = 0x28D168u;
    // 0x28d168: 0xc6200110
    ctx->pc = 0x28d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d16c: 0x3c05003b
    ctx->pc = 0x28d16cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d170: 0x46000064
    ctx->pc = 0x28d170u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d174: 0x44060800
    ctx->pc = 0x28d174u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x28d178: 0xc0b6252
    ctx->pc = 0x28D178u;
    SET_GPR_U32(ctx, 31, 0x28D180u);
    ctx->pc = 0x28D17Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D180u; }
    }
    if (ctx->pc != 0x28D180u) { return; }
    ctx->pc = 0x28D180u;
    // 0x28d180: 0x2c0202d
    ctx->pc = 0x28d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d184: 0x240282d
    ctx->pc = 0x28d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d188: 0x4600a306
    ctx->pc = 0x28d188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d18c: 0xc080a9a
    ctx->pc = 0x28D18Cu;
    SET_GPR_U32(ctx, 31, 0x28D194u);
    ctx->pc = 0x28D190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D194u; }
    }
    if (ctx->pc != 0x28D194u) { return; }
    ctx->pc = 0x28D194u;
    // 0x28d194: 0x10000010
    ctx->pc = 0x28D194u;
    {
        const bool branch_taken_0x28d194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D198u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x28d194) {
            ctx->pc = 0x28D1D8u;
            goto label_28d1d8;
        }
    }
    ctx->pc = 0x28D19Cu;
label_28d19c:
    // 0x28d19c: 0x3a0202d
    ctx->pc = 0x28d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1a0: 0x3c05003b
    ctx->pc = 0x28d1a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d1a4: 0x4600b824
    ctx->pc = 0x28d1a4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[23]);
    // 0x28d1a8: 0x44060000
    ctx->pc = 0x28d1a8u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x28d1ac: 0xc0b6252
    ctx->pc = 0x28D1ACu;
    SET_GPR_U32(ctx, 31, 0x28D1B4u);
    ctx->pc = 0x28D1B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1B4u; }
    }
    if (ctx->pc != 0x28D1B4u) { return; }
    ctx->pc = 0x28D1B4u;
    // 0x28d1b4: 0x2c0202d
    ctx->pc = 0x28d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1b8: 0x240282d
    ctx->pc = 0x28d1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1bc: 0x24060006
    ctx->pc = 0x28d1bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d1c0: 0x3c0700ff
    ctx->pc = 0x28d1c0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d1c4: 0x34e7ffff
    ctx->pc = 0x28d1c4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d1c8: 0x4600a306
    ctx->pc = 0x28d1c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d1cc: 0xc080510
    ctx->pc = 0x28D1CCu;
    SET_GPR_U32(ctx, 31, 0x28D1D4u);
    ctx->pc = 0x28D1D0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1D4u; }
    }
    if (ctx->pc != 0x28D1D4u) { return; }
    ctx->pc = 0x28D1D4u;
    // 0x28d1d4: 0x26520014
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_28d1d8:
    // 0x28d1d8: 0x2771021
    ctx->pc = 0x28d1d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x28d1dc: 0x50980b
    ctx->pc = 0x28d1dcu;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x28d1e0: 0xc6200114
    ctx->pc = 0x28d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d1e4: 0x4600c032
    ctx->pc = 0x28d1e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d1e8: 0x0
    ctx->pc = 0x28d1e8u;
    // NOP
    // 0x28d1ec: 0x45000002
    ctx->pc = 0x28D1ECu;
    {
        const bool branch_taken_0x28d1ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D1F0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28d1ec) {
            ctx->pc = 0x28D1F8u;
            goto label_28d1f8;
        }
    }
    ctx->pc = 0x28D1F4u;
    // 0x28d1f4: 0x802d
    ctx->pc = 0x28d1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d1f8:
    // 0x28d1f8: 0x1200000d
    ctx->pc = 0x28D1F8u;
    {
        const bool branch_taken_0x28d1f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D1FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d1f8) {
            ctx->pc = 0x28D230u;
            goto label_28d230;
        }
    }
    ctx->pc = 0x28D200u;
    // 0x28d200: 0x1040000b
    ctx->pc = 0x28D200u;
    {
        const bool branch_taken_0x28d200 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D204u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        if (branch_taken_0x28d200) {
            ctx->pc = 0x28D230u;
            goto label_28d230;
        }
    }
    ctx->pc = 0x28D208u;
    // 0x28d208: 0x282102a
    ctx->pc = 0x28d208u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x28d20c: 0x10400008
    ctx->pc = 0x28D20Cu;
    {
        const bool branch_taken_0x28d20c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D210u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d20c) {
            ctx->pc = 0x28D230u;
            goto label_28d230;
        }
    }
    ctx->pc = 0x28D214u;
    // 0x28d214: 0x240282d
    ctx->pc = 0x28d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d218: 0x4600a306
    ctx->pc = 0x28d218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d21c: 0x3c06003b
    ctx->pc = 0x28d21cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d220: 0xc080a9a
    ctx->pc = 0x28D220u;
    SET_GPR_U32(ctx, 31, 0x28D228u);
    ctx->pc = 0x28D224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957944));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D228u; }
    }
    if (ctx->pc != 0x28D228u) { return; }
    ctx->pc = 0x28D228u;
    // 0x28d228: 0x1000000a
    ctx->pc = 0x28D228u;
    {
        const bool branch_taken_0x28d228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28d228) {
            ctx->pc = 0x28D254u;
            goto label_28d254;
        }
    }
    ctx->pc = 0x28D230u;
label_28d230:
    // 0x28d230: 0x2a0202d
    ctx->pc = 0x28d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d234: 0x240282d
    ctx->pc = 0x28d234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d238: 0x24060006
    ctx->pc = 0x28d238u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d23c: 0x3c0700ff
    ctx->pc = 0x28d23cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d240: 0x34e7ffff
    ctx->pc = 0x28d240u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d244: 0x4600a306
    ctx->pc = 0x28d244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d248: 0x3c08003b
    ctx->pc = 0x28d248u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d24c: 0xc080510
    ctx->pc = 0x28D24Cu;
    SET_GPR_U32(ctx, 31, 0x28D254u);
    ctx->pc = 0x28D250u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957944));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D254u; }
    }
    if (ctx->pc != 0x28D254u) { return; }
    ctx->pc = 0x28D254u;
label_28d254:
    // 0x28d254: 0x12000010
    ctx->pc = 0x28D254u;
    {
        const bool branch_taken_0x28d254 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D258u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d254) {
            ctx->pc = 0x28D298u;
            goto label_28d298;
        }
    }
    ctx->pc = 0x28D25Cu;
    // 0x28d25c: 0x1040000e
    ctx->pc = 0x28D25Cu;
    {
        const bool branch_taken_0x28d25c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D260u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d25c) {
            ctx->pc = 0x28D298u;
            goto label_28d298;
        }
    }
    ctx->pc = 0x28D264u;
    // 0x28d264: 0xc6200114
    ctx->pc = 0x28d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d268: 0x3c05003b
    ctx->pc = 0x28d268u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d26c: 0x46000064
    ctx->pc = 0x28d26cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d270: 0x44060800
    ctx->pc = 0x28d270u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x28d274: 0xc0b6252
    ctx->pc = 0x28D274u;
    SET_GPR_U32(ctx, 31, 0x28D27Cu);
    ctx->pc = 0x28D278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D27Cu; }
    }
    if (ctx->pc != 0x28D27Cu) { return; }
    ctx->pc = 0x28D27Cu;
    // 0x28d27c: 0x2c0202d
    ctx->pc = 0x28d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d280: 0x240282d
    ctx->pc = 0x28d280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d284: 0x4600a306
    ctx->pc = 0x28d284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d288: 0xc080a9a
    ctx->pc = 0x28D288u;
    SET_GPR_U32(ctx, 31, 0x28D290u);
    ctx->pc = 0x28D28Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D290u; }
    }
    if (ctx->pc != 0x28D290u) { return; }
    ctx->pc = 0x28D290u;
    // 0x28d290: 0x10000010
    ctx->pc = 0x28D290u;
    {
        const bool branch_taken_0x28d290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D294u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x28d290) {
            ctx->pc = 0x28D2D4u;
            goto label_28d2d4;
        }
    }
    ctx->pc = 0x28D298u;
label_28d298:
    // 0x28d298: 0x3a0202d
    ctx->pc = 0x28d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d29c: 0x3c05003b
    ctx->pc = 0x28d29cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d2a0: 0x4600c024
    ctx->pc = 0x28d2a0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[24]);
    // 0x28d2a4: 0x44060000
    ctx->pc = 0x28d2a4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x28d2a8: 0xc0b6252
    ctx->pc = 0x28D2A8u;
    SET_GPR_U32(ctx, 31, 0x28D2B0u);
    ctx->pc = 0x28D2ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2B0u; }
    }
    if (ctx->pc != 0x28D2B0u) { return; }
    ctx->pc = 0x28D2B0u;
    // 0x28d2b0: 0x2c0202d
    ctx->pc = 0x28d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2b4: 0x240282d
    ctx->pc = 0x28d2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2b8: 0x24060006
    ctx->pc = 0x28d2b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d2bc: 0x3c0700ff
    ctx->pc = 0x28d2bcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d2c0: 0x34e7ffff
    ctx->pc = 0x28d2c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d2c4: 0x4600a306
    ctx->pc = 0x28d2c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d2c8: 0xc080510
    ctx->pc = 0x28D2C8u;
    SET_GPR_U32(ctx, 31, 0x28D2D0u);
    ctx->pc = 0x28D2CCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2D0u; }
    }
    if (ctx->pc != 0x28D2D0u) { return; }
    ctx->pc = 0x28D2D0u;
    // 0x28d2d0: 0x26520014
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_28d2d4:
    // 0x28d2d4: 0x2771021
    ctx->pc = 0x28d2d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x28d2d8: 0x50980b
    ctx->pc = 0x28d2d8u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x28d2dc: 0x8fa20020
    ctx->pc = 0x28d2dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d2e0: 0x2c500001
    ctx->pc = 0x28d2e0u;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x28d2e4: 0x12000014
    ctx->pc = 0x28D2E4u;
    {
        const bool branch_taken_0x28d2e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D2E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        if (branch_taken_0x28d2e4) {
            ctx->pc = 0x28D338u;
            goto label_28d338;
        }
    }
    ctx->pc = 0x28D2ECu;
    // 0x28d2ec: 0x274102a
    ctx->pc = 0x28d2ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
    // 0x28d2f0: 0x10400011
    ctx->pc = 0x28D2F0u;
    {
        const bool branch_taken_0x28d2f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D2F4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        if (branch_taken_0x28d2f0) {
            ctx->pc = 0x28D338u;
            goto label_28d338;
        }
    }
    ctx->pc = 0x28D2F8u;
    // 0x28d2f8: 0x282102a
    ctx->pc = 0x28d2f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x28d2fc: 0x1040000e
    ctx->pc = 0x28D2FCu;
    {
        const bool branch_taken_0x28d2fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D300u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d2fc) {
            ctx->pc = 0x28D338u;
            goto label_28d338;
        }
    }
    ctx->pc = 0x28D304u;
    // 0x28d304: 0x240282d
    ctx->pc = 0x28d304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d308: 0x4600a306
    ctx->pc = 0x28d308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d30c: 0x3c06003b
    ctx->pc = 0x28d30cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d310: 0xc080a9a
    ctx->pc = 0x28D310u;
    SET_GPR_U32(ctx, 31, 0x28D318u);
    ctx->pc = 0x28D314u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957952));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D318u; }
    }
    if (ctx->pc != 0x28D318u) { return; }
    ctx->pc = 0x28D318u;
    // 0x28d318: 0x2a0202d
    ctx->pc = 0x28d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d31c: 0x26450010
    ctx->pc = 0x28d31cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    // 0x28d320: 0x4600a306
    ctx->pc = 0x28d320u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d324: 0x3c06003b
    ctx->pc = 0x28d324u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d328: 0xc080a9a
    ctx->pc = 0x28D328u;
    SET_GPR_U32(ctx, 31, 0x28D330u);
    ctx->pc = 0x28D32Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957960));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D330u; }
    }
    if (ctx->pc != 0x28D330u) { return; }
    ctx->pc = 0x28D330u;
    // 0x28d330: 0x10000013
    ctx->pc = 0x28D330u;
    {
        const bool branch_taken_0x28d330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28d330) {
            ctx->pc = 0x28D380u;
            goto label_28d380;
        }
    }
    ctx->pc = 0x28D338u;
label_28d338:
    // 0x28d338: 0x2a0202d
    ctx->pc = 0x28d338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d33c: 0x240282d
    ctx->pc = 0x28d33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d340: 0x24060006
    ctx->pc = 0x28d340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d344: 0x3c0700ff
    ctx->pc = 0x28d344u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d348: 0x34e7ffff
    ctx->pc = 0x28d348u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d34c: 0x4600a306
    ctx->pc = 0x28d34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d350: 0x3c08003b
    ctx->pc = 0x28d350u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d354: 0xc080510
    ctx->pc = 0x28D354u;
    SET_GPR_U32(ctx, 31, 0x28D35Cu);
    ctx->pc = 0x28D358u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957952));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D35Cu; }
    }
    if (ctx->pc != 0x28D35Cu) { return; }
    ctx->pc = 0x28D35Cu;
    // 0x28d35c: 0x2a0202d
    ctx->pc = 0x28d35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d360: 0x26450010
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    // 0x28d364: 0x24060006
    ctx->pc = 0x28d364u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d368: 0x3c0700ff
    ctx->pc = 0x28d368u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d36c: 0x34e7ffff
    ctx->pc = 0x28d36cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d370: 0x4600a306
    ctx->pc = 0x28d370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d374: 0x3c08003b
    ctx->pc = 0x28d374u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d378: 0xc080510
    ctx->pc = 0x28D378u;
    SET_GPR_U32(ctx, 31, 0x28D380u);
    ctx->pc = 0x28D37Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D380u; }
    }
    if (ctx->pc != 0x28D380u) { return; }
    ctx->pc = 0x28D380u;
label_28d380:
    // 0x28d380: 0x12000015
    ctx->pc = 0x28D380u;
    {
        const bool branch_taken_0x28d380 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D384u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x28d380) {
            ctx->pc = 0x28D3D8u;
            goto label_28d3d8;
        }
    }
    ctx->pc = 0x28D388u;
    // 0x28d388: 0x10400013
    ctx->pc = 0x28D388u;
    {
        const bool branch_taken_0x28d388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28d388) {
            ctx->pc = 0x28D3D8u;
            goto label_28d3d8;
        }
    }
    ctx->pc = 0x28D390u;
    // 0x28d390: 0xc08c96a
    ctx->pc = 0x28D390u;
    SET_GPR_U32(ctx, 31, 0x28D398u);
    ctx->pc = 0x28D394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2325A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_max_health_0x2325a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D398u; }
    }
    if (ctx->pc != 0x28D398u) { return; }
    ctx->pc = 0x28D398u;
    // 0x28d398: 0x3a0202d
    ctx->pc = 0x28d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d39c: 0x3c05003b
    ctx->pc = 0x28d39cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d3a0: 0x46000064
    ctx->pc = 0x28d3a0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d3a4: 0x44060800
    ctx->pc = 0x28d3a4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x28d3a8: 0xc0b6252
    ctx->pc = 0x28D3A8u;
    SET_GPR_U32(ctx, 31, 0x28D3B0u);
    ctx->pc = 0x28D3ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3B0u; }
    }
    if (ctx->pc != 0x28D3B0u) { return; }
    ctx->pc = 0x28D3B0u;
    // 0x28d3b0: 0x2c0202d
    ctx->pc = 0x28d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3b4: 0x26450008
    ctx->pc = 0x28d3b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 8));
    // 0x28d3b8: 0x4600a306
    ctx->pc = 0x28d3b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d3bc: 0xc080a9a
    ctx->pc = 0x28D3BCu;
    SET_GPR_U32(ctx, 31, 0x28D3C4u);
    ctx->pc = 0x28D3C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3C4u; }
    }
    if (ctx->pc != 0x28D3C4u) { return; }
    ctx->pc = 0x28D3C4u;
    // 0x28d3c4: 0x8e220988
    ctx->pc = 0x28d3c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2440)));
    // 0x28d3c8: 0x3c030001
    ctx->pc = 0x28d3c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x28d3cc: 0x431025
    ctx->pc = 0x28d3ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d3d0: 0x10000021
    ctx->pc = 0x28D3D0u;
    {
        const bool branch_taken_0x28d3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D3D4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2440), GPR_U32(ctx, 2));
        if (branch_taken_0x28d3d0) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D3D8u;
label_28d3d8:
    // 0x28d3d8: 0xc08c96a
    ctx->pc = 0x28D3D8u;
    SET_GPR_U32(ctx, 31, 0x28D3E0u);
    ctx->pc = 0x28D3DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2325A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_max_health_0x2325a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3E0u; }
    }
    if (ctx->pc != 0x28D3E0u) { return; }
    ctx->pc = 0x28D3E0u;
    // 0x28d3e0: 0x46000064
    ctx->pc = 0x28d3e0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d3e4: 0x44060800
    ctx->pc = 0x28d3e4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x28d3e8: 0x8fa20020
    ctx->pc = 0x28d3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d3ec: 0x1440000f
    ctx->pc = 0x28D3ECu;
    {
        const bool branch_taken_0x28d3ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28D3F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d3ec) {
            ctx->pc = 0x28D42Cu;
            goto label_28d42c;
        }
    }
    ctx->pc = 0x28D3F4u;
    // 0x28d3f4: 0x44861000
    ctx->pc = 0x28d3f4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 6);
    // 0x28d3f8: 0x468010a0
    ctx->pc = 0x28d3f8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x28d3fc: 0x8e222ac0
    ctx->pc = 0x28d3fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28d400: 0x8fa3002c
    ctx->pc = 0x28d400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28d404: 0x431023
    ctx->pc = 0x28d404u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d408: 0x44820000
    ctx->pc = 0x28d408u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x28d40c: 0x46800020
    ctx->pc = 0x28d40cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x28d410: 0x3c0142c8
    ctx->pc = 0x28d410u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x28d414: 0x44810800
    ctx->pc = 0x28d414u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x28d418: 0x46010002
    ctx->pc = 0x28d418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28d41c: 0x46001081
    ctx->pc = 0x28d41cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28d420: 0x46001024
    ctx->pc = 0x28d420u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x28d424: 0x44060000
    ctx->pc = 0x28d424u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x28d428: 0x3a0202d
    ctx->pc = 0x28d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28d42c:
    // 0x28d42c: 0x3c05003b
    ctx->pc = 0x28d42cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d430: 0xc0b6252
    ctx->pc = 0x28D430u;
    SET_GPR_U32(ctx, 31, 0x28D438u);
    ctx->pc = 0x28D434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D438u; }
    }
    if (ctx->pc != 0x28D438u) { return; }
    ctx->pc = 0x28D438u;
    // 0x28d438: 0x2c0202d
    ctx->pc = 0x28d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d43c: 0x26450008
    ctx->pc = 0x28d43cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 8));
    // 0x28d440: 0x24060006
    ctx->pc = 0x28d440u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d444: 0x3c0700ff
    ctx->pc = 0x28d444u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d448: 0x34e7ffff
    ctx->pc = 0x28d448u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d44c: 0x4600a306
    ctx->pc = 0x28d44cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d450: 0xc080510
    ctx->pc = 0x28D450u;
    SET_GPR_U32(ctx, 31, 0x28D458u);
    ctx->pc = 0x28D454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D458u; }
    }
    if (ctx->pc != 0x28D458u) { return; }
    ctx->pc = 0x28D458u;
label_28d458:
    // 0x28d458: 0x26520010
    ctx->pc = 0x28d458u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
    // 0x28d45c: 0x2771021
    ctx->pc = 0x28d45cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x28d460: 0x50980b
    ctx->pc = 0x28d460u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x28d464: 0x8fa20020
    ctx->pc = 0x28d464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d468: 0x14400019
    ctx->pc = 0x28D468u;
    {
        const bool branch_taken_0x28d468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28D46Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x28d468) {
            ctx->pc = 0x28D4D0u;
            goto label_28d4d0;
        }
    }
    ctx->pc = 0x28D470u;
    // 0x28d470: 0x8e232ac0
    ctx->pc = 0x28d470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28d474: 0x24020019
    ctx->pc = 0x28d474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x28d478: 0x1462000b
    ctx->pc = 0x28D478u;
    {
        const bool branch_taken_0x28d478 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28D47Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
        if (branch_taken_0x28d478) {
            ctx->pc = 0x28D4A8u;
            goto label_28d4a8;
        }
    }
    ctx->pc = 0x28D480u;
    // 0x28d480: 0x1e2023
    ctx->pc = 0x28d480u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x28d484: 0x240282d
    ctx->pc = 0x28d484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d488: 0x24060006
    ctx->pc = 0x28d488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d48c: 0x3c0700ff
    ctx->pc = 0x28d48cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d490: 0x34e780c0
    ctx->pc = 0x28d490u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32960));
    // 0x28d494: 0x240800b8
    ctx->pc = 0x28d494u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 184));
    // 0x28d498: 0xc0807a8
    ctx->pc = 0x28D498u;
    SET_GPR_U32(ctx, 31, 0x28D4A0u);
    ctx->pc = 0x28D49Cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4A0u; }
    }
    if (ctx->pc != 0x28D4A0u) { return; }
    ctx->pc = 0x28D4A0u;
    // 0x28d4a0: 0x8e232ac0
    ctx->pc = 0x28d4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x28d4a4: 0x24020032
    ctx->pc = 0x28d4a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
label_28d4a8:
    // 0x28d4a8: 0x1462000a
    ctx->pc = 0x28D4A8u;
    {
        const bool branch_taken_0x28d4a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28D4ACu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
        if (branch_taken_0x28d4a8) {
            ctx->pc = 0x28D4D4u;
            goto label_28d4d4;
        }
    }
    ctx->pc = 0x28D4B0u;
    // 0x28d4b0: 0x1e2023
    ctx->pc = 0x28d4b0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x28d4b4: 0x240282d
    ctx->pc = 0x28d4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4b8: 0x24060006
    ctx->pc = 0x28d4b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d4bc: 0x3c0700ff
    ctx->pc = 0x28d4bcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d4c0: 0x34e780c0
    ctx->pc = 0x28d4c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32960));
    // 0x28d4c4: 0x240800b9
    ctx->pc = 0x28d4c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 185));
    // 0x28d4c8: 0xc0807a8
    ctx->pc = 0x28D4C8u;
    SET_GPR_U32(ctx, 31, 0x28D4D0u);
    ctx->pc = 0x28D4CCu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4D0u; }
    }
    if (ctx->pc != 0x28D4D0u) { return; }
    ctx->pc = 0x28D4D0u;
label_28d4d0:
    // 0x28d4d0: 0x293182a
    ctx->pc = 0x28d4d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
label_28d4d4:
    // 0x28d4d4: 0x24020001
    ctx->pc = 0x28d4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d4d8: 0x8fa40028
    ctx->pc = 0x28d4d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28d4dc: 0x43200a
    ctx->pc = 0x28d4dcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x28d4e0: 0x1080001d
    ctx->pc = 0x28D4E0u;
    {
        const bool branch_taken_0x28d4e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D4E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x28d4e0) {
            ctx->pc = 0x28D558u;
            goto label_28d558;
        }
    }
    ctx->pc = 0x28D4E8u;
    // 0x28d4e8: 0x24631b90
    ctx->pc = 0x28d4e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x28d4ec: 0x8e220000
    ctx->pc = 0x28d4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28d4f0: 0x2404003c
    ctx->pc = 0x28d4f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28d4f4: 0x441018
    ctx->pc = 0x28d4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28d4f8: 0x621821
    ctx->pc = 0x28d4f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d4fc: 0x8c620008
    ctx->pc = 0x28d4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28d500: 0x3c030200
    ctx->pc = 0x28d500u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x28d504: 0x431024
    ctx->pc = 0x28d504u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d508: 0x10400006
    ctx->pc = 0x28D508u;
    {
        const bool branch_taken_0x28d508 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D50Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x28d508) {
            ctx->pc = 0x28D524u;
            goto label_28d524;
        }
    }
    ctx->pc = 0x28D510u;
    // 0x28d510: 0xc0981a6
    ctx->pc = 0x28D510u;
    SET_GPR_U32(ctx, 31, 0x28D518u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D518u; }
    }
    if (ctx->pc != 0x28D518u) { return; }
    ctx->pc = 0x28D518u;
    // 0x28d518: 0xae200988
    ctx->pc = 0x28d518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2440), GPR_U32(ctx, 0));
    // 0x28d51c: 0x10000019
    ctx->pc = 0x28D51Cu;
    {
        const bool branch_taken_0x28d51c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D520u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28d51c) {
            ctx->pc = 0x28D584u;
            goto label_28d584;
        }
    }
    ctx->pc = 0x28D524u;
label_28d524:
    // 0x28d524: 0x8c44b154
    ctx->pc = 0x28d524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
    // 0x28d528: 0x26a50008
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d52c: 0x24060118
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 280));
    // 0x28d530: 0x24070010
    ctx->pc = 0x28d530u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d534: 0xc0b0c6a
    ctx->pc = 0x28D534u;
    SET_GPR_U32(ctx, 31, 0x28D53Cu);
    ctx->pc = 0x28D538u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D53Cu; }
    }
    if (ctx->pc != 0x28D53Cu) { return; }
    ctx->pc = 0x28D53Cu;
    // 0x28d53c: 0x26a40020
    ctx->pc = 0x28d53cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 32));
    // 0x28d540: 0x24050118
    ctx->pc = 0x28d540u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 280));
    // 0x28d544: 0x3c013f00
    ctx->pc = 0x28d544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28d548: 0x44816000
    ctx->pc = 0x28d548u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28d54c: 0x3c06003b
    ctx->pc = 0x28d54cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d550: 0xc080a9a
    ctx->pc = 0x28D550u;
    SET_GPR_U32(ctx, 31, 0x28D558u);
    ctx->pc = 0x28D554u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957968));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D558u; }
    }
    if (ctx->pc != 0x28D558u) { return; }
    ctx->pc = 0x28D558u;
label_28d558:
    // 0x28d558: 0x1e2023
    ctx->pc = 0x28d558u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x28d55c: 0x24050008
    ctx->pc = 0x28d55cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x28d560: 0x24060006
    ctx->pc = 0x28d560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d564: 0x382d
    ctx->pc = 0x28d564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d568: 0x3c013ee6
    ctx->pc = 0x28d568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16102 << 16));
    // 0x28d56c: 0x34216666
    ctx->pc = 0x28d56cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x28d570: 0x44816000
    ctx->pc = 0x28d570u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28d574: 0x3c08003b
    ctx->pc = 0x28d574u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d578: 0xc080510
    ctx->pc = 0x28D578u;
    SET_GPR_U32(ctx, 31, 0x28D580u);
    ctx->pc = 0x28D57Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957632));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D580u; }
    }
    if (ctx->pc != 0x28D580u) { return; }
    ctx->pc = 0x28D580u;
    // 0x28d580: 0x102d
    ctx->pc = 0x28d580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d584:
    // 0x28d584: 0xdfbf00c0
    ctx->pc = 0x28d584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28d588: 0xdfbe00b0
    ctx->pc = 0x28d588u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28d58c: 0xdfb700a0
    ctx->pc = 0x28d58cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28d590: 0xdfb60090
    ctx->pc = 0x28d590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28d594: 0xdfb50080
    ctx->pc = 0x28d594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28d598: 0xdfb40070
    ctx->pc = 0x28d598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d59c: 0xdfb30060
    ctx->pc = 0x28d59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d5a0: 0xdfb20050
    ctx->pc = 0x28d5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d5a4: 0xdfb10040
    ctx->pc = 0x28d5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d5a8: 0xdfb00030
    ctx->pc = 0x28d5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d5ac: 0xc7b800f0
    ctx->pc = 0x28d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28d5b0: 0xc7b700e8
    ctx->pc = 0x28d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28d5b4: 0xc7b600e0
    ctx->pc = 0x28d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28d5b8: 0xc7b500d8
    ctx->pc = 0x28d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28d5bc: 0xc7b400d0
    ctx->pc = 0x28d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d5c0: 0x3e00008
    ctx->pc = 0x28D5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D5C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28CD38u: goto label_28cd38;
            case 0x28CD40u: goto label_28cd40;
            case 0x28CD4Cu: goto label_28cd4c;
            case 0x28CD74u: goto label_28cd74;
            case 0x28CD80u: goto label_28cd80;
            case 0x28CDA0u: goto label_28cda0;
            case 0x28CDD4u: goto label_28cdd4;
            case 0x28CDF8u: goto label_28cdf8;
            case 0x28CE10u: goto label_28ce10;
            case 0x28CE28u: goto label_28ce28;
            case 0x28CE3Cu: goto label_28ce3c;
            case 0x28CE4Cu: goto label_28ce4c;
            case 0x28CE64u: goto label_28ce64;
            case 0x28CF04u: goto label_28cf04;
            case 0x28CF3Cu: goto label_28cf3c;
            case 0x28CF60u: goto label_28cf60;
            case 0x28CFA4u: goto label_28cfa4;
            case 0x28CFE0u: goto label_28cfe0;
            case 0x28D000u: goto label_28d000;
            case 0x28D038u: goto label_28d038;
            case 0x28D05Cu: goto label_28d05c;
            case 0x28D0A0u: goto label_28d0a0;
            case 0x28D0DCu: goto label_28d0dc;
            case 0x28D0FCu: goto label_28d0fc;
            case 0x28D134u: goto label_28d134;
            case 0x28D158u: goto label_28d158;
            case 0x28D19Cu: goto label_28d19c;
            case 0x28D1D8u: goto label_28d1d8;
            case 0x28D1F8u: goto label_28d1f8;
            case 0x28D230u: goto label_28d230;
            case 0x28D254u: goto label_28d254;
            case 0x28D298u: goto label_28d298;
            case 0x28D2D4u: goto label_28d2d4;
            case 0x28D338u: goto label_28d338;
            case 0x28D380u: goto label_28d380;
            case 0x28D3D8u: goto label_28d3d8;
            case 0x28D42Cu: goto label_28d42c;
            case 0x28D458u: goto label_28d458;
            case 0x28D4A8u: goto label_28d4a8;
            case 0x28D4D0u: goto label_28d4d0;
            case 0x28D4D4u: goto label_28d4d4;
            case 0x28D524u: goto label_28d524;
            case 0x28D558u: goto label_28d558;
            case 0x28D584u: goto label_28d584;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D5C8u;
}
