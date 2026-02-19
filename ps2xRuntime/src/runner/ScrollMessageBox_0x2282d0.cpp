#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollMessageBox
// Address: 0x2282d0 - 0x2287e0
void ScrollMessageBox_0x2282d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2282d0u;

    // 0x2282d0: 0x27bdff20
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2282d4: 0xffbf00c0
    ctx->pc = 0x2282d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2282d8: 0xffbe00b0
    ctx->pc = 0x2282d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2282dc: 0xffb700a0
    ctx->pc = 0x2282dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2282e0: 0xffb60090
    ctx->pc = 0x2282e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2282e4: 0xffb50080
    ctx->pc = 0x2282e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2282e8: 0xffb40070
    ctx->pc = 0x2282e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2282ec: 0xffb30060
    ctx->pc = 0x2282ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2282f0: 0xffb20050
    ctx->pc = 0x2282f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2282f4: 0xffb10040
    ctx->pc = 0x2282f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2282f8: 0xffb00030
    ctx->pc = 0x2282f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2282fc: 0xe7b400d0
    ctx->pc = 0x2282fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x228300: 0xafa40000
    ctx->pc = 0x228300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x228304: 0xa0b82d
    ctx->pc = 0x228304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228308: 0xc0902d
    ctx->pc = 0x228308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22830c: 0xafa70004
    ctx->pc = 0x22830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x228310: 0x3c020031
    ctx->pc = 0x228310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228314: 0x8c42ff9c
    ctx->pc = 0x228314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x228318: 0x6410007
    ctx->pc = 0x228318u;
    {
        const bool branch_taken_0x228318 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22831Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x228318) {
            ctx->pc = 0x228338u;
            goto label_228338;
        }
    }
    ctx->pc = 0x228320u;
    // 0x228320: 0xa82d
    ctx->pc = 0x228320u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228324: 0xc080a8c
    ctx->pc = 0x228324u;
    SET_GPR_U32(ctx, 31, 0x22832Cu);
    ctx->pc = 0x228328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextNum_0x202a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22832Cu; }
    }
    if (ctx->pc != 0x22832Cu) { return; }
    ctx->pc = 0x22832Cu;
    // 0x22832c: 0x2442ffff
    ctx->pc = 0x22832cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228330: 0x10000003
    ctx->pc = 0x228330u;
    {
        const bool branch_taken_0x228330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x228334u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x228330) {
            ctx->pc = 0x228340u;
            goto label_228340;
        }
    }
    ctx->pc = 0x228338u;
label_228338:
    // 0x228338: 0x240a82d
    ctx->pc = 0x228338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22833c: 0xafb20010
    ctx->pc = 0x22833cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_228340:
    // 0x228340: 0xc081782
    ctx->pc = 0x228340u;
    SET_GPR_U32(ctx, 31, 0x228348u);
    ctx->pc = 0x228344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnablePlayerControls_0x205e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228348u; }
    }
    if (ctx->pc != 0x228348u) { return; }
    ctx->pc = 0x228348u;
label_228348:
    // 0x228348: 0xc08da4e
    ctx->pc = 0x228348u;
    SET_GPR_U32(ctx, 31, 0x228350u);
    ctx->pc = 0x22834Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228350u; }
    }
    if (ctx->pc != 0x228350u) { return; }
    ctx->pc = 0x228350u;
    // 0x228350: 0x26100001
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x228354: 0x2a020004
    ctx->pc = 0x228354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x228358: 0x1440fffb
    ctx->pc = 0x228358u;
    {
        const bool branch_taken_0x228358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22835Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x228358) {
            ctx->pc = 0x228348u;
            goto label_228348;
        }
    }
    ctx->pc = 0x228360u;
    // 0x228360: 0x3c100032
    ctx->pc = 0x228360u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x228364: 0x8e0208b8
    ctx->pc = 0x228364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228368: 0x24420001
    ctx->pc = 0x228368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x22836c: 0xae0208b8
    ctx->pc = 0x22836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2232), GPR_U32(ctx, 2));
    // 0x228370: 0x3c020031
    ctx->pc = 0x228370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228374: 0xc0a3bae
    ctx->pc = 0x228374u;
    SET_GPR_U32(ctx, 31, 0x22837Cu);
    ctx->pc = 0x228378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 17));
    ctx->pc = 0x28EEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoHelp_0x28eeb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22837Cu; }
    }
    if (ctx->pc != 0x22837Cu) { return; }
    ctx->pc = 0x22837Cu;
    // 0x22837c: 0xc0b1214
    ctx->pc = 0x22837Cu;
    SET_GPR_U32(ctx, 31, 0x228384u);
    ctx->pc = 0x228380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4850u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBHideMarkedMessages_0x2c4850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228384u; }
    }
    if (ctx->pc != 0x228384u) { return; }
    ctx->pc = 0x228384u;
    // 0x228384: 0x8e0408b8
    ctx->pc = 0x228384u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228388: 0xc0b15fe
    ctx->pc = 0x228388u;
    SET_GPR_U32(ctx, 31, 0x228390u);
    ctx->pc = 0x22838Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x2C57F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBLockMessages_0x2c57f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228390u; }
    }
    if (ctx->pc != 0x228390u) { return; }
    ctx->pc = 0x228390u;
    // 0x228390: 0x3c020037
    ctx->pc = 0x228390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x228394: 0xac5131ac
    ctx->pc = 0x228394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12716), GPR_U32(ctx, 17));
    // 0x228398: 0x3c020032
    ctx->pc = 0x228398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22839c: 0x3c030032
    ctx->pc = 0x22839cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2283a0: 0x8c440aa8
    ctx->pc = 0x2283a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2728)));
    // 0x2283a4: 0x24050006
    ctx->pc = 0x2283a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2283a8: 0xc080552
    ctx->pc = 0x2283A8u;
    SET_GPR_U32(ctx, 31, 0x2283B0u);
    ctx->pc = 0x2283ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283B0u; }
    }
    if (ctx->pc != 0x2283B0u) { return; }
    ctx->pc = 0x2283B0u;
    // 0x2283b0: 0x24420020
    ctx->pc = 0x2283b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2283b4: 0xafa2001c
    ctx->pc = 0x2283b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2283b8: 0x3c020032
    ctx->pc = 0x2283b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2283bc: 0x8c440aac
    ctx->pc = 0x2283bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2732)));
    // 0x2283c0: 0x282d
    ctx->pc = 0x2283c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283c4: 0xc0b0c08
    ctx->pc = 0x2283C4u;
    SET_GPR_U32(ctx, 31, 0x2283CCu);
    ctx->pc = 0x2283C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283CCu; }
    }
    if (ctx->pc != 0x2283CCu) { return; }
    ctx->pc = 0x2283CCu;
    // 0x2283cc: 0xafa2000c
    ctx->pc = 0x2283ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2283d0: 0x3c020038
    ctx->pc = 0x2283d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2283d4: 0x202d
    ctx->pc = 0x2283d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283d8: 0x8c45b150
    ctx->pc = 0x2283d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294947152)));
    // 0x2283dc: 0x240600df
    ctx->pc = 0x2283dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 223));
    // 0x2283e0: 0x26870008
    ctx->pc = 0x2283e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 20), 8));
    // 0x2283e4: 0x24080014
    ctx->pc = 0x2283e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2283e8: 0xc0b0b54
    ctx->pc = 0x2283E8u;
    SET_GPR_U32(ctx, 31, 0x2283F0u);
    ctx->pc = 0x2283ECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283F0u; }
    }
    if (ctx->pc != 0x2283F0u) { return; }
    ctx->pc = 0x2283F0u;
    // 0x2283f0: 0x40b02d
    ctx->pc = 0x2283f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283f4: 0x8fa30010
    ctx->pc = 0x2283f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2283f8: 0x72102a
    ctx->pc = 0x2283f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x2283fc: 0x144000a7
    ctx->pc = 0x2283FCu;
    {
        const bool branch_taken_0x2283fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228400u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2283fc) {
            ctx->pc = 0x22869Cu;
            goto label_22869c;
        }
    }
    ctx->pc = 0x228404u;
    // 0x228404: 0x3c013f80
    ctx->pc = 0x228404u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x228408: 0x4481a000
    ctx->pc = 0x228408u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x22840c: 0x0
    ctx->pc = 0x22840cu;
    // NOP
label_228410:
    // 0x228410: 0x2e0282d
    ctx->pc = 0x228410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228414: 0x240302d
    ctx->pc = 0x228414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228418: 0xc0809fe
    ctx->pc = 0x228418u;
    SET_GPR_U32(ctx, 31, 0x228420u);
    ctx->pc = 0x22841Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2027F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextWidth_0x2027f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228420u; }
    }
    if (ctx->pc != 0x228420u) { return; }
    ctx->pc = 0x228420u;
    // 0x228420: 0x24530060
    ctx->pc = 0x228420u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 96));
    // 0x228424: 0x202d
    ctx->pc = 0x228424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228428: 0x2e0282d
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22842c: 0x240302d
    ctx->pc = 0x22842cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228430: 0x24070004
    ctx->pc = 0x228430u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x228434: 0xc080a70
    ctx->pc = 0x228434u;
    SET_GPR_U32(ctx, 31, 0x22843Cu);
    ctx->pc = 0x228438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2029C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextHeight_0x2029c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22843Cu; }
    }
    if (ctx->pc != 0x22843Cu) { return; }
    ctx->pc = 0x22843Cu;
    // 0x22843c: 0x245e0060
    ctx->pc = 0x22843cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 96));
    // 0x228440: 0x8fa4001c
    ctx->pc = 0x228440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x228444: 0x264102a
    ctx->pc = 0x228444u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 4)));
    // 0x228448: 0x54400005
    ctx->pc = 0x228448u;
    {
        const bool branch_taken_0x228448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228448) {
            ctx->pc = 0x22844Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->pc = 0x228460u;
            goto label_228460;
        }
    }
    ctx->pc = 0x228450u;
    // 0x228450: 0x2a630201
    ctx->pc = 0x228450u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 513));
    // 0x228454: 0x24020200
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x228458: 0x40282d
    ctx->pc = 0x228458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22845c: 0x263280b
    ctx->pc = 0x22845cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 19));
label_228460:
    // 0x228460: 0xa0982d
    ctx->pc = 0x228460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228464: 0x1317c2
    ctx->pc = 0x228464u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), 31));
    // 0x228468: 0x2621021
    ctx->pc = 0x228468u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22846c: 0x21043
    ctx->pc = 0x22846cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x228470: 0x24030100
    ctx->pc = 0x228470u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x228474: 0x621823
    ctx->pc = 0x228474u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228478: 0xafa30014
    ctx->pc = 0x228478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x22847c: 0x1e17c2
    ctx->pc = 0x22847cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 30), 31));
    // 0x228480: 0x3c21021
    ctx->pc = 0x228480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x228484: 0x21043
    ctx->pc = 0x228484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x228488: 0x240300a0
    ctx->pc = 0x228488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 160));
    // 0x22848c: 0x621823
    ctx->pc = 0x22848cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228490: 0xafa30018
    ctx->pc = 0x228490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x228494: 0x24670020
    ctx->pc = 0x228494u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 32));
    // 0x228498: 0xafa70020
    ctx->pc = 0x228498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x22849c: 0x2415000f
    ctx->pc = 0x22849cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2284a0: 0x8fa4000c
    ctx->pc = 0x2284a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2284a4: 0xc0b0cf6
    ctx->pc = 0x2284A4u;
    SET_GPR_U32(ctx, 31, 0x2284ACu);
    ctx->pc = 0x2284A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284ACu; }
    }
    if (ctx->pc != 0x2284ACu) { return; }
    ctx->pc = 0x2284ACu;
    // 0x2284ac: 0x8fa4000c
    ctx->pc = 0x2284acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2284b0: 0x8fa50014
    ctx->pc = 0x2284b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2284b4: 0x3c01bf80
    ctx->pc = 0x2284b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2284b8: 0x44816000
    ctx->pc = 0x2284b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2284bc: 0xc0b0df2
    ctx->pc = 0x2284BCu;
    SET_GPR_U32(ctx, 31, 0x2284C4u);
    ctx->pc = 0x2284C0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284C4u; }
    }
    if (ctx->pc != 0x2284C4u) { return; }
    ctx->pc = 0x2284C4u;
    // 0x2284c4: 0x2402ffff
    ctx->pc = 0x2284c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2284c8: 0x8fa30004
    ctx->pc = 0x2284c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2284cc: 0x43102a
    ctx->pc = 0x2284ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2284d0: 0xafa20024
    ctx->pc = 0x2284d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2284d4: 0x0
    ctx->pc = 0x2284d4u;
    // NOP
label_2284d8:
    // 0x2284d8: 0xc088ad6
    ctx->pc = 0x2284D8u;
    SET_GPR_U32(ctx, 31, 0x2284E0u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284E0u; }
    }
    if (ctx->pc != 0x2284E0u) { return; }
    ctx->pc = 0x2284E0u;
    // 0x2284e0: 0x2c510001
    ctx->pc = 0x2284e0u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2284e4: 0xc0881f4
    ctx->pc = 0x2284E4u;
    SET_GPR_U32(ctx, 31, 0x2284ECu);
    ctx->pc = 0x2284E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2207D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPoll_0x2207d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284ECu; }
    }
    if (ctx->pc != 0x2284ECu) { return; }
    ctx->pc = 0x2284ECu;
    // 0x2284ec: 0x8fa40024
    ctx->pc = 0x2284ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2284f0: 0x24070001
    ctx->pc = 0x2284f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2284f4: 0xc080b88
    ctx->pc = 0x2284F4u;
    SET_GPR_U32(ctx, 31, 0x2284FCu);
    ctx->pc = 0x2284F8u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 7));
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284FCu; }
    }
    if (ctx->pc != 0x2284FCu) { return; }
    ctx->pc = 0x2284FCu;
    // 0x2284fc: 0xc088ad6
    ctx->pc = 0x2284FCu;
    SET_GPR_U32(ctx, 31, 0x228504u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228504u; }
    }
    if (ctx->pc != 0x228504u) { return; }
    ctx->pc = 0x228504u;
    // 0x228504: 0xc0815b4
    ctx->pc = 0x228504u;
    SET_GPR_U32(ctx, 31, 0x22850Cu);
    ctx->pc = 0x2056D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerControls_0x2056d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22850Cu; }
    }
    if (ctx->pc != 0x22850Cu) { return; }
    ctx->pc = 0x22850Cu;
    // 0x22850c: 0x3c020031
    ctx->pc = 0x22850cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228510: 0x8c420e4c
    ctx->pc = 0x228510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    // 0x228514: 0x10400003
    ctx->pc = 0x228514u;
    {
        const bool branch_taken_0x228514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x228514) {
            ctx->pc = 0x228524u;
            goto label_228524;
        }
    }
    ctx->pc = 0x22851Cu;
    // 0x22851c: 0xc08a1f8
    ctx->pc = 0x22851Cu;
    SET_GPR_U32(ctx, 31, 0x228524u);
    ctx->pc = 0x2287E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ControllerMessageBox_0x2287e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228524u; }
    }
    if (ctx->pc != 0x228524u) { return; }
    ctx->pc = 0x228524u;
label_228524:
    // 0x228524: 0xc08ab98
    ctx->pc = 0x228524u;
    SET_GPR_U32(ctx, 31, 0x22852Cu);
    ctx->pc = 0x22AE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaver_0x22ae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22852Cu; }
    }
    if (ctx->pc != 0x22852Cu) { return; }
    ctx->pc = 0x22852Cu;
    // 0x22852c: 0xc09734e
    ctx->pc = 0x22852Cu;
    SET_GPR_U32(ctx, 31, 0x228534u);
    ctx->pc = 0x25CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicUpdate_0x25cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228534u; }
    }
    if (ctx->pc != 0x228534u) { return; }
    ctx->pc = 0x228534u;
    // 0x228534: 0x202d
    ctx->pc = 0x228534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228538: 0x2405ff00
    ctx->pc = 0x228538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22853c: 0x8fa60020
    ctx->pc = 0x22853cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228540: 0x24070004
    ctx->pc = 0x228540u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x228544: 0x2408ffff
    ctx->pc = 0x228544u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228548: 0x3c090016
    ctx->pc = 0x228548u;
    SET_GPR_U32(ctx, 9, ((uint32_t)22 << 16));
    // 0x22854c: 0x35290c03
    ctx->pc = 0x22854cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 3075));
    // 0x228550: 0x2e0502d
    ctx->pc = 0x228550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228554: 0xc0807e6
    ctx->pc = 0x228554u;
    SET_GPR_U32(ctx, 31, 0x22855Cu);
    ctx->pc = 0x228558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollText_0x201f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22855Cu; }
    }
    if (ctx->pc != 0x22855Cu) { return; }
    ctx->pc = 0x22855Cu;
    // 0x22855c: 0x3c020031
    ctx->pc = 0x22855cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228560: 0x8c54f284
    ctx->pc = 0x228560u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4294963844)));
    // 0x228564: 0x2c0202d
    ctx->pc = 0x228564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228568: 0xc0b0ce8
    ctx->pc = 0x228568u;
    SET_GPR_U32(ctx, 31, 0x228570u);
    ctx->pc = 0x22856Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228570u; }
    }
    if (ctx->pc != 0x228570u) { return; }
    ctx->pc = 0x228570u;
    // 0x228570: 0x26900008
    ctx->pc = 0x228570u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 8));
    // 0x228574: 0x2c0202d
    ctx->pc = 0x228574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228578: 0x240500df
    ctx->pc = 0x228578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 223));
    // 0x22857c: 0x3c01bf80
    ctx->pc = 0x22857cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x228580: 0x44816000
    ctx->pc = 0x228580u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x228584: 0xc0b0df2
    ctx->pc = 0x228584u;
    SET_GPR_U32(ctx, 31, 0x22858Cu);
    ctx->pc = 0x228588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22858Cu; }
    }
    if (ctx->pc != 0x22858Cu) { return; }
    ctx->pc = 0x22858Cu;
    // 0x22858c: 0x2404ff00
    ctx->pc = 0x22858cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x228590: 0x200282d
    ctx->pc = 0x228590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228594: 0x3c020032
    ctx->pc = 0x228594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228598: 0xc44c0aa0
    ctx->pc = 0x228598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22859c: 0x3c030032
    ctx->pc = 0x22859cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2285a0: 0xc080a9a
    ctx->pc = 0x2285A0u;
    SET_GPR_U32(ctx, 31, 0x2285A8u);
    ctx->pc = 0x2285A4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 2728)));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2285A8u; }
    }
    if (ctx->pc != 0x2285A8u) { return; }
    ctx->pc = 0x2285A8u;
    // 0x2285a8: 0xc0b179a
    ctx->pc = 0x2285A8u;
    SET_GPR_U32(ctx, 31, 0x2285B0u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2285B0u; }
    }
    if (ctx->pc != 0x2285B0u) { return; }
    ctx->pc = 0x2285B0u;
    // 0x2285b0: 0x1ea00029
    ctx->pc = 0x2285B0u;
    {
        const bool branch_taken_0x2285b0 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x2285B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2285b0) {
            ctx->pc = 0x228658u;
            goto label_228658;
        }
    }
    ctx->pc = 0x2285B8u;
    // 0x2285b8: 0x182d
    ctx->pc = 0x2285b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285bc: 0x202d
    ctx->pc = 0x2285bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285c0: 0x802d
    ctx->pc = 0x2285c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285c4: 0x3c020032
    ctx->pc = 0x2285c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2285c8: 0x24481bc0
    ctx->pc = 0x2285c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2285cc: 0x24062b00
    ctx->pc = 0x2285ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2285d0: 0x2405003c
    ctx->pc = 0x2285d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2285d4: 0x3c020031
    ctx->pc = 0x2285d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2285d8: 0x24491b98
    ctx->pc = 0x2285d8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x2285dc: 0x8fa70000
    ctx->pc = 0x2285dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2285e0:
    // 0x2285e0: 0x2071007
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x2285e4: 0x30420001
    ctx->pc = 0x2285e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2285e8: 0x10400009
    ctx->pc = 0x2285E8u;
    {
        const bool branch_taken_0x2285e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2285ECu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2285e8) {
            ctx->pc = 0x228610u;
            goto label_228610;
        }
    }
    ctx->pc = 0x2285F0u;
    // 0x2285f0: 0xe81021
    ctx->pc = 0x2285f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2285f4: 0x8c4200fc
    ctx->pc = 0x2285f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x2285f8: 0x10400005
    ctx->pc = 0x2285F8u;
    {
        const bool branch_taken_0x2285f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2285FCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2285f8) {
            ctx->pc = 0x228610u;
            goto label_228610;
        }
    }
    ctx->pc = 0x228600u;
    // 0x228600: 0xe91021
    ctx->pc = 0x228600u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x228604: 0x8c420000
    ctx->pc = 0x228604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228608: 0x621825
    ctx->pc = 0x228608u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22860c: 0x24840001
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_228610:
    // 0x228610: 0x26100001
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x228614: 0x2a020004
    ctx->pc = 0x228614u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x228618: 0x5440fff1
    ctx->pc = 0x228618u;
    {
        const bool branch_taken_0x228618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228618) {
            ctx->pc = 0x22861Cu;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x2285E0u;
            goto label_2285e0;
        }
    }
    ctx->pc = 0x228620u;
    // 0x228620: 0x3c020800
    ctx->pc = 0x228620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x228624: 0x621024
    ctx->pc = 0x228624u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228628: 0x14400003
    ctx->pc = 0x228628u;
    {
        const bool branch_taken_0x228628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22862Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x228628) {
            ctx->pc = 0x228638u;
            goto label_228638;
        }
    }
    ctx->pc = 0x228630u;
    // 0x228630: 0x1480000b
    ctx->pc = 0x228630u;
    {
        const bool branch_taken_0x228630 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x228630) {
            ctx->pc = 0x228660u;
            goto label_228660;
        }
    }
    ctx->pc = 0x228638u;
label_228638:
    // 0x228638: 0x442000d
    ctx->pc = 0x228638u;
    {
        const bool branch_taken_0x228638 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x228638) {
            ctx->pc = 0x22863Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
            ctx->pc = 0x228670u;
            goto label_228670;
        }
    }
    ctx->pc = 0x228640u;
    // 0x228640: 0x5620000b
    ctx->pc = 0x228640u;
    {
        const bool branch_taken_0x228640 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x228640) {
            ctx->pc = 0x228644u;
            SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
            ctx->pc = 0x228670u;
            goto label_228670;
        }
    }
    ctx->pc = 0x228648u;
    // 0x228648: 0xc08870e
    ctx->pc = 0x228648u;
    SET_GPR_U32(ctx, 31, 0x228650u);
    ctx->pc = 0x22864Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228650u; }
    }
    if (ctx->pc != 0x228650u) { return; }
    ctx->pc = 0x228650u;
    // 0x228650: 0x10000007
    ctx->pc = 0x228650u;
    {
        const bool branch_taken_0x228650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x228654u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x228650) {
            ctx->pc = 0x228670u;
            goto label_228670;
        }
    }
    ctx->pc = 0x228658u;
label_228658:
    // 0x228658: 0x8c42ffc0
    ctx->pc = 0x228658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x22865c: 0x2a2a823
    ctx->pc = 0x22865cu;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_228660:
    // 0x228660: 0xc0894b8
    ctx->pc = 0x228660u;
    SET_GPR_U32(ctx, 31, 0x228668u);
    ctx->pc = 0x2252E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckSoftReset_0x2252e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228668u; }
    }
    if (ctx->pc != 0x228668u) { return; }
    ctx->pc = 0x228668u;
    // 0x228668: 0x1040ff9b
    ctx->pc = 0x228668u;
    {
        const bool branch_taken_0x228668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22866Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x228668) {
            ctx->pc = 0x2284D8u;
            goto label_2284d8;
        }
    }
    ctx->pc = 0x228670u;
label_228670:
    // 0x228670: 0xdc420e28
    ctx->pc = 0x228670u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x228674: 0x30420008
    ctx->pc = 0x228674u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x228678: 0x54400004
    ctx->pc = 0x228678u;
    {
        const bool branch_taken_0x228678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228678) {
            ctx->pc = 0x22867Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x22868Cu;
            goto label_22868c;
        }
    }
    ctx->pc = 0x228680u;
    // 0x228680: 0xc0816cc
    ctx->pc = 0x228680u;
    SET_GPR_U32(ctx, 31, 0x228688u);
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228688u; }
    }
    if (ctx->pc != 0x228688u) { return; }
    ctx->pc = 0x228688u;
    // 0x228688: 0x26520001
    ctx->pc = 0x228688u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_22868c:
    // 0x22868c: 0x8fa30010
    ctx->pc = 0x22868cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228690: 0x72102a
    ctx->pc = 0x228690u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x228694: 0x1040ff5e
    ctx->pc = 0x228694u;
    {
        const bool branch_taken_0x228694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228698u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x228694) {
            ctx->pc = 0x228410u;
            goto label_228410;
        }
    }
    ctx->pc = 0x22869Cu;
label_22869c:
    // 0x22869c: 0xc0b0b38
    ctx->pc = 0x22869Cu;
    SET_GPR_U32(ctx, 31, 0x2286A4u);
    ctx->pc = 0x2286A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2286A4u; }
    }
    if (ctx->pc != 0x2286A4u) { return; }
    ctx->pc = 0x2286A4u;
    // 0x2286a4: 0x3c020032
    ctx->pc = 0x2286a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2286a8: 0x8c440aac
    ctx->pc = 0x2286a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2732)));
    // 0x2286ac: 0x2405ffff
    ctx->pc = 0x2286acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2286b0: 0x8fa60014
    ctx->pc = 0x2286b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2286b4: 0x8fa70018
    ctx->pc = 0x2286b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2286b8: 0x260402d
    ctx->pc = 0x2286b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286bc: 0x3c0482d
    ctx->pc = 0x2286bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286c0: 0x44806000
    ctx->pc = 0x2286c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2286c4: 0xc08a334
    ctx->pc = 0x2286C4u;
    SET_GPR_U32(ctx, 31, 0x2286CCu);
    ctx->pc = 0x2286C8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x228CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFireScroll_0x228cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2286CCu; }
    }
    if (ctx->pc != 0x2286CCu) { return; }
    ctx->pc = 0x2286CCu;
    // 0x2286cc: 0x40202d
    ctx->pc = 0x2286ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286d0: 0xc0b0ba0
    ctx->pc = 0x2286D0u;
    SET_GPR_U32(ctx, 31, 0x2286D8u);
    ctx->pc = 0x2286D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x2C2E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitOrder_0x2c2e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2286D8u; }
    }
    if (ctx->pc != 0x2286D8u) { return; }
    ctx->pc = 0x2286D8u;
    // 0x2286d8: 0x10000003
    ctx->pc = 0x2286D8u;
    {
        const bool branch_taken_0x2286d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2286DCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x2286d8) {
            ctx->pc = 0x2286E8u;
            goto label_2286e8;
        }
    }
    ctx->pc = 0x2286E0u;
label_2286e0:
    // 0x2286e0: 0xc0b179a
    ctx->pc = 0x2286E0u;
    SET_GPR_U32(ctx, 31, 0x2286E8u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2286E8u; }
    }
    if (ctx->pc != 0x2286E8u) { return; }
    ctx->pc = 0x2286E8u;
label_2286e8:
    // 0x2286e8: 0xc080b88
    ctx->pc = 0x2286E8u;
    SET_GPR_U32(ctx, 31, 0x2286F0u);
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2286F0u; }
    }
    if (ctx->pc != 0x2286F0u) { return; }
    ctx->pc = 0x2286F0u;
    // 0x2286f0: 0xc088ad6
    ctx->pc = 0x2286F0u;
    SET_GPR_U32(ctx, 31, 0x2286F8u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2286F8u; }
    }
    if (ctx->pc != 0x2286F8u) { return; }
    ctx->pc = 0x2286F8u;
    // 0x2286f8: 0x202d
    ctx->pc = 0x2286f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286fc: 0x2405ff00
    ctx->pc = 0x2286fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x228700: 0x8fa60020
    ctx->pc = 0x228700u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228704: 0x24070004
    ctx->pc = 0x228704u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x228708: 0x2408ffff
    ctx->pc = 0x228708u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22870c: 0x3c090016
    ctx->pc = 0x22870cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)22 << 16));
    // 0x228710: 0x35290c03
    ctx->pc = 0x228710u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 3075));
    // 0x228714: 0x2e0502d
    ctx->pc = 0x228714u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228718: 0xc0807e6
    ctx->pc = 0x228718u;
    SET_GPR_U32(ctx, 31, 0x228720u);
    ctx->pc = 0x22871Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollText_0x201f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228720u; }
    }
    if (ctx->pc != 0x228720u) { return; }
    ctx->pc = 0x228720u;
    // 0x228720: 0xc08a458
    ctx->pc = 0x228720u;
    SET_GPR_U32(ctx, 31, 0x228728u);
    ctx->pc = 0x229160u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeFireScroll_0x229160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228728u; }
    }
    if (ctx->pc != 0x228728u) { return; }
    ctx->pc = 0x228728u;
    // 0x228728: 0x1440ffed
    ctx->pc = 0x228728u;
    {
        const bool branch_taken_0x228728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228728) {
            ctx->pc = 0x2286E0u;
            goto label_2286e0;
        }
    }
    ctx->pc = 0x228730u;
    // 0x228730: 0xc0b0b38
    ctx->pc = 0x228730u;
    SET_GPR_U32(ctx, 31, 0x228738u);
    ctx->pc = 0x228734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228738u; }
    }
    if (ctx->pc != 0x228738u) { return; }
    ctx->pc = 0x228738u;
    // 0x228738: 0x3c100032
    ctx->pc = 0x228738u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x22873c: 0x8e0408b8
    ctx->pc = 0x22873cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228740: 0xc0b161c
    ctx->pc = 0x228740u;
    SET_GPR_U32(ctx, 31, 0x228748u);
    ctx->pc = 0x228744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x2C5870u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBUnlockMessages_0x2c5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228748u; }
    }
    if (ctx->pc != 0x228748u) { return; }
    ctx->pc = 0x228748u;
    // 0x228748: 0x3c020037
    ctx->pc = 0x228748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x22874c: 0xac4031ac
    ctx->pc = 0x22874cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12716), GPR_U32(ctx, 0));
    // 0x228750: 0x8e0208b8
    ctx->pc = 0x228750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228754: 0x2442ffff
    ctx->pc = 0x228754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228758: 0xae0208b8
    ctx->pc = 0x228758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2232), GPR_U32(ctx, 2));
    // 0x22875c: 0x3c020031
    ctx->pc = 0x22875cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228760: 0x8fa40008
    ctx->pc = 0x228760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228764: 0xac44ff9c
    ctx->pc = 0x228764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 4));
    // 0x228768: 0x802d
    ctx->pc = 0x228768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22876c: 0x3c020032
    ctx->pc = 0x22876cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228770: 0x24451bc0
    ctx->pc = 0x228770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x228774: 0x24032b00
    ctx->pc = 0x228774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_228778:
    // 0x228778: 0x2032018
    ctx->pc = 0x228778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22877c: 0x851021
    ctx->pc = 0x22877cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x228780: 0xa440093e
    ctx->pc = 0x228780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2366), (uint16_t)GPR_U32(ctx, 0));
    // 0x228784: 0x26100001
    ctx->pc = 0x228784u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x228788: 0x2a020004
    ctx->pc = 0x228788u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22878c: 0x0
    ctx->pc = 0x22878cu;
    // NOP
    // 0x228790: 0x1440fff9
    ctx->pc = 0x228790u;
    {
        const bool branch_taken_0x228790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228790) {
            ctx->pc = 0x228778u;
            goto label_228778;
        }
    }
    ctx->pc = 0x228798u;
    // 0x228798: 0xc0816cc
    ctx->pc = 0x228798u;
    SET_GPR_U32(ctx, 31, 0x2287A0u);
    ctx->pc = 0x22879Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2287A0u; }
    }
    if (ctx->pc != 0x2287A0u) { return; }
    ctx->pc = 0x2287A0u;
    // 0x2287a0: 0xc080366
    ctx->pc = 0x2287A0u;
    SET_GPR_U32(ctx, 31, 0x2287A8u);
    ctx->pc = 0x200D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadVU1GameLogic_0x200d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2287A8u; }
    }
    if (ctx->pc != 0x2287A8u) { return; }
    ctx->pc = 0x2287A8u;
    // 0x2287a8: 0x102d
    ctx->pc = 0x2287a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2287ac: 0xdfbf00c0
    ctx->pc = 0x2287acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2287b0: 0xdfbe00b0
    ctx->pc = 0x2287b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2287b4: 0xdfb700a0
    ctx->pc = 0x2287b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2287b8: 0xdfb60090
    ctx->pc = 0x2287b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2287bc: 0xdfb50080
    ctx->pc = 0x2287bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2287c0: 0xdfb40070
    ctx->pc = 0x2287c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2287c4: 0xdfb30060
    ctx->pc = 0x2287c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2287c8: 0xdfb20050
    ctx->pc = 0x2287c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2287cc: 0xdfb10040
    ctx->pc = 0x2287ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2287d0: 0xdfb00030
    ctx->pc = 0x2287d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2287d4: 0xc7b400d0
    ctx->pc = 0x2287d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2287d8: 0x3e00008
    ctx->pc = 0x2287D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2287DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228338u: goto label_228338;
            case 0x228340u: goto label_228340;
            case 0x228348u: goto label_228348;
            case 0x228410u: goto label_228410;
            case 0x228460u: goto label_228460;
            case 0x2284D8u: goto label_2284d8;
            case 0x228524u: goto label_228524;
            case 0x2285E0u: goto label_2285e0;
            case 0x228610u: goto label_228610;
            case 0x228638u: goto label_228638;
            case 0x228658u: goto label_228658;
            case 0x228660u: goto label_228660;
            case 0x228670u: goto label_228670;
            case 0x22868Cu: goto label_22868c;
            case 0x22869Cu: goto label_22869c;
            case 0x2286E0u: goto label_2286e0;
            case 0x2286E8u: goto label_2286e8;
            case 0x228778u: goto label_228778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2287E0u;
}
