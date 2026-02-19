#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeInit
// Address: 0x2d0098 - 0x2d0258
void MBTreeInit_0x2d0098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0098u;

    // 0x2d0098: 0x27bdffa0
    ctx->pc = 0x2d0098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d009c: 0xffbf0050
    ctx->pc = 0x2d009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d00a0: 0xffb40040
    ctx->pc = 0x2d00a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d00a4: 0xffb30030
    ctx->pc = 0x2d00a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d00a8: 0xffb20020
    ctx->pc = 0x2d00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d00ac: 0xffb10010
    ctx->pc = 0x2d00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d00b0: 0xffb00000
    ctx->pc = 0x2d00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d00b4: 0x3c02003a
    ctx->pc = 0x2d00b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d00b8: 0xac400c90
    ctx->pc = 0x2d00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3216), GPR_U32(ctx, 0));
    // 0x2d00bc: 0x3c02003a
    ctx->pc = 0x2d00bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d00c0: 0xac400c94
    ctx->pc = 0x2d00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3220), GPR_U32(ctx, 0));
    // 0x2d00c4: 0x3c02003a
    ctx->pc = 0x2d00c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d00c8: 0xac4014b0
    ctx->pc = 0x2d00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5296), GPR_U32(ctx, 0));
    // 0x2d00cc: 0xc0b225e
    ctx->pc = 0x2D00CCu;
    SET_GPR_U32(ctx, 31, 0x2D00D4u);
    ctx->pc = 0x2D00D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C8978u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitObjects_0x2c8978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00D4u; }
    }
    if (ctx->pc != 0x2D00D4u) { return; }
    ctx->pc = 0x2D00D4u;
    // 0x2d00d4: 0xc0b0bcc
    ctx->pc = 0x2D00D4u;
    SET_GPR_U32(ctx, 31, 0x2D00DCu);
    ctx->pc = 0x2D00D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C2F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitBlits_0x2c2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00DCu; }
    }
    if (ctx->pc != 0x2D00DCu) { return; }
    ctx->pc = 0x2D00DCu;
    // 0x2d00dc: 0xc0b3ce2
    ctx->pc = 0x2D00DCu;
    SET_GPR_U32(ctx, 31, 0x2D00E4u);
    ctx->pc = 0x2D00E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CF388u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitPolys_0x2cf388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00E4u; }
    }
    if (ctx->pc != 0x2D00E4u) { return; }
    ctx->pc = 0x2D00E4u;
    // 0x2d00e4: 0x202d
    ctx->pc = 0x2d00e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00e8: 0x282d
    ctx->pc = 0x2d00e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00ec: 0xc0b3ec0
    ctx->pc = 0x2D00ECu;
    SET_GPR_U32(ctx, 31, 0x2D00F4u);
    ctx->pc = 0x2D00F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D00F4u; }
    }
    if (ctx->pc != 0x2D00F4u) { return; }
    ctx->pc = 0x2D00F4u;
    // 0x2d00f4: 0x3c14003a
    ctx->pc = 0x2d00f4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2d00f8: 0xae820cac
    ctx->pc = 0x2d00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3244), GPR_U32(ctx, 2));
    // 0x2d00fc: 0x8c430060
    ctx->pc = 0x2d00fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2d0100: 0x34630004
    ctx->pc = 0x2d0100u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2d0104: 0xac430060
    ctx->pc = 0x2d0104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2d0108: 0x202d
    ctx->pc = 0x2d0108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d010c: 0x282d
    ctx->pc = 0x2d010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0110: 0xc0b3ec0
    ctx->pc = 0x2D0110u;
    SET_GPR_U32(ctx, 31, 0x2D0118u);
    ctx->pc = 0x2D0114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0118u; }
    }
    if (ctx->pc != 0x2D0118u) { return; }
    ctx->pc = 0x2D0118u;
    // 0x2d0118: 0x3c13003a
    ctx->pc = 0x2d0118u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2d011c: 0xae620ca8
    ctx->pc = 0x2d011cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3240), GPR_U32(ctx, 2));
    // 0x2d0120: 0x8c430060
    ctx->pc = 0x2d0120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2d0124: 0x34630004
    ctx->pc = 0x2d0124u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2d0128: 0xac430060
    ctx->pc = 0x2d0128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2d012c: 0x202d
    ctx->pc = 0x2d012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0130: 0x282d
    ctx->pc = 0x2d0130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0134: 0xc0b3ec0
    ctx->pc = 0x2D0134u;
    SET_GPR_U32(ctx, 31, 0x2D013Cu);
    ctx->pc = 0x2D0138u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D013Cu; }
    }
    if (ctx->pc != 0x2D013Cu) { return; }
    ctx->pc = 0x2D013Cu;
    // 0x2d013c: 0x3c12003a
    ctx->pc = 0x2d013cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2d0140: 0xae4214b4
    ctx->pc = 0x2d0140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5300), GPR_U32(ctx, 2));
    // 0x2d0144: 0x3c020038
    ctx->pc = 0x2d0144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2d0148: 0x3c110037
    ctx->pc = 0x2d0148u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2d014c: 0x8c44c99c
    ctx->pc = 0x2d014cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953372)));
    // 0x2d0150: 0xc0b400a
    ctx->pc = 0x2D0150u;
    SET_GPR_U32(ctx, 31, 0x2D0158u);
    ctx->pc = 0x2D0154u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12700)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0158u; }
    }
    if (ctx->pc != 0x2D0158u) { return; }
    ctx->pc = 0x2D0158u;
    // 0x2d0158: 0x3c100038
    ctx->pc = 0x2d0158u;
    SET_GPR_U32(ctx, 16, ((uint32_t)56 << 16));
    // 0x2d015c: 0x8e24319c
    ctx->pc = 0x2d015cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12700)));
    // 0x2d0160: 0xc0b400a
    ctx->pc = 0x2D0160u;
    SET_GPR_U32(ctx, 31, 0x2D0168u);
    ctx->pc = 0x2D0164u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294953376)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0168u; }
    }
    if (ctx->pc != 0x2D0168u) { return; }
    ctx->pc = 0x2D0168u;
    // 0x2d0168: 0x8e04c9a0
    ctx->pc = 0x2d0168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294953376)));
    // 0x2d016c: 0xc0b400a
    ctx->pc = 0x2D016Cu;
    SET_GPR_U32(ctx, 31, 0x2D0174u);
    ctx->pc = 0x2D0170u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 5300)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0174u; }
    }
    if (ctx->pc != 0x2D0174u) { return; }
    ctx->pc = 0x2D0174u;
    // 0x2d0174: 0x3c100038
    ctx->pc = 0x2d0174u;
    SET_GPR_U32(ctx, 16, ((uint32_t)56 << 16));
    // 0x2d0178: 0x8e4414b4
    ctx->pc = 0x2d0178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 5300)));
    // 0x2d017c: 0xc0b400a
    ctx->pc = 0x2D017Cu;
    SET_GPR_U32(ctx, 31, 0x2D0184u);
    ctx->pc = 0x2D0180u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294953380)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0184u; }
    }
    if (ctx->pc != 0x2D0184u) { return; }
    ctx->pc = 0x2D0184u;
    // 0x2d0184: 0x3c110038
    ctx->pc = 0x2d0184u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2d0188: 0x8e04c9a4
    ctx->pc = 0x2d0188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294953380)));
    // 0x2d018c: 0xc0b400a
    ctx->pc = 0x2D018Cu;
    SET_GPR_U32(ctx, 31, 0x2D0194u);
    ctx->pc = 0x2D0190u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0194u; }
    }
    if (ctx->pc != 0x2D0194u) { return; }
    ctx->pc = 0x2D0194u;
    // 0x2d0194: 0x3c10003a
    ctx->pc = 0x2d0194u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d0198: 0x8e24c9a8
    ctx->pc = 0x2d0198u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x2d019c: 0xc0b400a
    ctx->pc = 0x2D019Cu;
    SET_GPR_U32(ctx, 31, 0x2D01A4u);
    ctx->pc = 0x2D01A0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294949104)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01A4u; }
    }
    if (ctx->pc != 0x2D01A4u) { return; }
    ctx->pc = 0x2D01A4u;
    // 0x2d01a4: 0x3c110038
    ctx->pc = 0x2d01a4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2d01a8: 0x8e04b8f0
    ctx->pc = 0x2d01a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294949104)));
    // 0x2d01ac: 0xc0b400a
    ctx->pc = 0x2D01ACu;
    SET_GPR_U32(ctx, 31, 0x2D01B4u);
    ctx->pc = 0x2D01B0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01B4u; }
    }
    if (ctx->pc != 0x2D01B4u) { return; }
    ctx->pc = 0x2D01B4u;
    // 0x2d01b4: 0x8e840cac
    ctx->pc = 0x2d01b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 3244)));
    // 0x2d01b8: 0xc0b400a
    ctx->pc = 0x2D01B8u;
    SET_GPR_U32(ctx, 31, 0x2D01C0u);
    ctx->pc = 0x2D01BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294949104)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01C0u; }
    }
    if (ctx->pc != 0x2D01C0u) { return; }
    ctx->pc = 0x2D01C0u;
    // 0x2d01c0: 0x3c100037
    ctx->pc = 0x2d01c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2d01c4: 0x8e24c9ac
    ctx->pc = 0x2d01c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294953388)));
    // 0x2d01c8: 0xc0b400a
    ctx->pc = 0x2D01C8u;
    SET_GPR_U32(ctx, 31, 0x2D01D0u);
    ctx->pc = 0x2D01CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12692)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01D0u; }
    }
    if (ctx->pc != 0x2D01D0u) { return; }
    ctx->pc = 0x2D01D0u;
    // 0x2d01d0: 0x8e043194
    ctx->pc = 0x2d01d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12692)));
    // 0x2d01d4: 0xc0b400a
    ctx->pc = 0x2D01D4u;
    SET_GPR_U32(ctx, 31, 0x2D01DCu);
    ctx->pc = 0x2D01D8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 3240)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01DCu; }
    }
    if (ctx->pc != 0x2D01DCu) { return; }
    ctx->pc = 0x2D01DCu;
    // 0x2d01dc: 0x3c100037
    ctx->pc = 0x2d01dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2d01e0: 0x8e640ca8
    ctx->pc = 0x2d01e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 3240)));
    // 0x2d01e4: 0xc0b400a
    ctx->pc = 0x2D01E4u;
    SET_GPR_U32(ctx, 31, 0x2D01ECu);
    ctx->pc = 0x2D01E8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12696)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01ECu; }
    }
    if (ctx->pc != 0x2D01ECu) { return; }
    ctx->pc = 0x2D01ECu;
    // 0x2d01ec: 0x3c020038
    ctx->pc = 0x2d01ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2d01f0: 0x8e043198
    ctx->pc = 0x2d01f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12696)));
    // 0x2d01f4: 0xc0b400a
    ctx->pc = 0x2D01F4u;
    SET_GPR_U32(ctx, 31, 0x2D01FCu);
    ctx->pc = 0x2D01F8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294953392)));
    ctx->pc = 0x2D0028u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeOrder_0x2d0028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01FCu; }
    }
    if (ctx->pc != 0x2D01FCu) { return; }
    ctx->pc = 0x2D01FCu;
    // 0x2d01fc: 0x182d
    ctx->pc = 0x2d01fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0200: 0x3c02003a
    ctx->pc = 0x2d0200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d0204: 0x244410b0
    ctx->pc = 0x2d0204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2d0208: 0x3c017cf0
    ctx->pc = 0x2d0208u;
    SET_GPR_U32(ctx, 1, ((uint32_t)31984 << 16));
    // 0x2d020c: 0x3421bdc2
    ctx->pc = 0x2d020cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48578));
    // 0x2d0210: 0x44810000
    ctx->pc = 0x2d0210u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d0214: 0x0
    ctx->pc = 0x2d0214u;
    // NOP
label_2d0218:
    // 0x2d0218: 0x31100
    ctx->pc = 0x2d0218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d021c: 0x441021
    ctx->pc = 0x2d021cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d0220: 0xe4400000
    ctx->pc = 0x2d0220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d0224: 0x24630001
    ctx->pc = 0x2d0224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d0228: 0x28620040
    ctx->pc = 0x2d0228u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 64));
    // 0x2d022c: 0x1440fffa
    ctx->pc = 0x2D022Cu;
    {
        const bool branch_taken_0x2d022c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d022c) {
            ctx->pc = 0x2D0218u;
            goto label_2d0218;
        }
    }
    ctx->pc = 0x2D0234u;
    // 0x2d0234: 0x24040003
    ctx->pc = 0x2d0234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0238: 0xdfbf0050
    ctx->pc = 0x2d0238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d023c: 0xdfb40040
    ctx->pc = 0x2d023cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0240: 0xdfb30030
    ctx->pc = 0x2d0240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0244: 0xdfb20020
    ctx->pc = 0x2d0244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0248: 0xdfb10010
    ctx->pc = 0x2d0248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d024c: 0xdfb00000
    ctx->pc = 0x2d024cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0250: 0x80b4a86
    ctx->pc = 0x2D0250u;
    ctx->pc = 0x2D0254u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D2A18u;
    reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime); return;
    ctx->pc = 0x2D0258u;
}
