#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shape__16FaceAnimMgrClassFifPii
// Address: 0x1e64e0 - 0x1e6778
void shape__16FaceAnimMgrClassFifPii_0x1e64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shape__16FaceAnimMgrClassFifPii");


    ctx->pc = 0x1e64e0u;

    // 0x1e64e0: 0x27bdff70
    ctx->pc = 0x1e64e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e64e4: 0x7fbf0080
    ctx->pc = 0x1e64e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1e64e8: 0x7fb60070
    ctx->pc = 0x1e64e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e64ec: 0x7fb50060
    ctx->pc = 0x1e64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e64f0: 0x7fb40050
    ctx->pc = 0x1e64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e64f4: 0x7fb30040
    ctx->pc = 0x1e64f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e64f8: 0x7fb20030
    ctx->pc = 0x1e64f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e64fc: 0x7fb10020
    ctx->pc = 0x1e64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e6500: 0x7fb00010
    ctx->pc = 0x1e6500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6504: 0x70a08628
    ctx->pc = 0x1e6504u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6508: 0xe7b40000
    ctx->pc = 0x1e6508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e650c: 0x2a010072
    ctx->pc = 0x1e650cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 114));
    // 0x1e6510: 0x46006506
    ctx->pc = 0x1e6510u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e6514: 0x70c0b628
    ctx->pc = 0x1e6514u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6518: 0x1020008c
    ctx->pc = 0x1E6518u;
    {
        const bool branch_taken_0x1e6518 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E651Cu;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e6518) {
            ctx->pc = 0x1E674Cu;
            goto label_1e674c;
        }
    }
    ctx->pc = 0x1E6520u;
    // 0x1e6520: 0xc079708
    ctx->pc = 0x1E6520u;
    SET_GPR_U32(ctx, 31, 0x1E6528u);
    ctx->pc = 0x1E5C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        data_set__16FaceAnimMgrClassFi_0x1e5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6528u; }
        else if (ctx->pc != 0x1E6528u) { ctx->pc = 0x1E6528u; }
    }
    if (ctx->pc != 0x1E6528u) { return; }
    ctx->pc = 0x1E6528u;
    // 0x1e6528: 0x3c030050
    ctx->pc = 0x1e6528u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e652c: 0x102080
    ctx->pc = 0x1e652cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e6530: 0x246308b0
    ctx->pc = 0x1e6530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1e6534: 0x641821
    ctx->pc = 0x1e6534u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6538: 0x8c680000
    ctx->pc = 0x1e6538u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e653c: 0x19000083
    ctx->pc = 0x1E653Cu;
    {
        const bool branch_taken_0x1e653c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1E6540u;
        SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
        if (branch_taken_0x1e653c) {
            ctx->pc = 0x1E674Cu;
            goto label_1e674c;
        }
    }
    ctx->pc = 0x1E6544u;
    // 0x1e6544: 0x2463a940
    ctx->pc = 0x1e6544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945088));
    // 0x1e6548: 0x641821
    ctx->pc = 0x1e6548u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e654c: 0x8c670000
    ctx->pc = 0x1e654cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6550: 0x3405ffff
    ctx->pc = 0x1e6550u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e6554: 0x73403
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1e6558: 0x3c030050
    ctx->pc = 0x1e6558u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e655c: 0xc52824
    ctx->pc = 0x1e655cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e6560: 0x2464ea20
    ctx->pc = 0x1e6560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x1e6564: 0x52900
    ctx->pc = 0x1e6564u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6568: 0x852021
    ctx->pc = 0x1e6568u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e656c: 0x8c840000
    ctx->pc = 0x1e656cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6570: 0x3c038000
    ctx->pc = 0x1e6570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1e6574: 0x831824
    ctx->pc = 0x1e6574u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e6578: 0x10600074
    ctx->pc = 0x1E6578u;
    {
        const bool branch_taken_0x1e6578 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E657Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 63));
        if (branch_taken_0x1e6578) {
            ctx->pc = 0x1E674Cu;
            goto label_1e674c;
        }
    }
    ctx->pc = 0x1E6580u;
    // 0x1e6580: 0x2402ffc0
    ctx->pc = 0x1e6580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e6584: 0x16c0000e
    ctx->pc = 0x1E6584u;
    {
        const bool branch_taken_0x1e6584 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6588u;
        SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e6584) {
            ctx->pc = 0x1E65C0u;
            goto label_1e65c0;
        }
    }
    ctx->pc = 0x1E658Cu;
    // 0x1e658c: 0x30c2ffff
    ctx->pc = 0x1e658cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1e6590: 0x21900
    ctx->pc = 0x1e6590u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6594: 0x3c020050
    ctx->pc = 0x1e6594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e6598: 0x2442ea24
    ctx->pc = 0x1e6598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1e659c: 0x431021
    ctx->pc = 0x1e659cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e65a0: 0x8c420000
    ctx->pc = 0x1e65a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e65a4: 0x30e4ffff
    ctx->pc = 0x1e65a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 65535));
    // 0x1e65a8: 0x41840
    ctx->pc = 0x1e65a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e65ac: 0x641821
    ctx->pc = 0x1e65acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e65b0: 0x31880
    ctx->pc = 0x1e65b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e65b4: 0x431021
    ctx->pc = 0x1e65b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e65b8: 0x8c560000
    ctx->pc = 0x1e65b8u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e65bc: 0x0
    ctx->pc = 0x1e65bcu;
    // NOP
label_1e65c0:
    // 0x1e65c0: 0x8e820004
    ctx->pc = 0x1e65c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e65c4: 0x8e830000
    ctx->pc = 0x1e65c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e65c8: 0x26920004
    ctx->pc = 0x1e65c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e65cc: 0x2828021
    ctx->pc = 0x1e65ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e65d0: 0x31040
    ctx->pc = 0x1e65d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e65d4: 0x431021
    ctx->pc = 0x1e65d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e65d8: 0xc06878c
    ctx->pc = 0x1E65D8u;
    SET_GPR_U32(ctx, 31, 0x1E65E0u);
    ctx->pc = 0x1E65DCu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65E0u; }
        else if (ctx->pc != 0x1E65E0u) { ctx->pc = 0x1E65E0u; }
    }
    if (ctx->pc != 0x1E65E0u) { return; }
    ctx->pc = 0x1E65E0u;
    // 0x1e65e0: 0x70408e28
    ctx->pc = 0x1e65e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e65e4: 0x3c023f80
    ctx->pc = 0x1e65e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e65e8: 0x44820000
    ctx->pc = 0x1e65e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e65ec: 0x0
    ctx->pc = 0x1e65ecu;
    // NOP
    // 0x1e65f0: 0x4600a034
    ctx->pc = 0x1e65f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e65f4: 0x0
    ctx->pc = 0x1e65f4u;
    // NOP
    // 0x1e65f8: 0x4500004a
    ctx->pc = 0x1E65F8u;
    {
        const bool branch_taken_0x1e65f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E65FCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e65f8) {
            ctx->pc = 0x1E6724u;
            goto label_1e6724;
        }
    }
    ctx->pc = 0x1E6600u;
    // 0x1e6600: 0x72402e28
    ctx->pc = 0x1e6600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e6604: 0x10000004
    ctx->pc = 0x1E6604u;
    {
        const bool branch_taken_0x1e6604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1e6604) {
            ctx->pc = 0x1E6618u;
            goto label_1e6618;
        }
    }
    ctx->pc = 0x1E660Cu;
label_1e660c:
    // 0x1e660c: 0x24a50004
    ctx->pc = 0x1e660cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e6610: 0x24840001
    ctx->pc = 0x1e6610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e6614: 0x0
    ctx->pc = 0x1e6614u;
    // NOP
label_1e6618:
    // 0x1e6618: 0x8ca30004
    ctx->pc = 0x1e6618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e661c: 0x0
    ctx->pc = 0x1e661cu;
    // NOP
    // 0x1e6620: 0x0
    ctx->pc = 0x1e6620u;
    // NOP
    // 0x1e6624: 0x1462fff9
    ctx->pc = 0x1E6624u;
    {
        const bool branch_taken_0x1e6624 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e6624) {
            ctx->pc = 0x1E660Cu;
            goto label_1e660c;
        }
    }
    ctx->pc = 0x1E662Cu;
    // 0x1e662c: 0x44801000
    ctx->pc = 0x1e662cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1e6630: 0x0
    ctx->pc = 0x1e6630u;
    // NOP
    // 0x1e6634: 0x4602a036
    ctx->pc = 0x1e6634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6638: 0x0
    ctx->pc = 0x1e6638u;
    // NOP
    // 0x1e663c: 0x4501002f
    ctx->pc = 0x1E663Cu;
    {
        const bool branch_taken_0x1e663c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e663c) {
            ctx->pc = 0x1E66FCu;
            goto label_1e66fc;
        }
    }
    ctx->pc = 0x1E6644u;
    // 0x1e6644: 0x44840000
    ctx->pc = 0x1e6644u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1e6648: 0x0
    ctx->pc = 0x1e6648u;
    // NOP
    // 0x1e664c: 0x46800020
    ctx->pc = 0x1e664cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1e6650: 0x4600a042
    ctx->pc = 0x1e6650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1e6654: 0x46000824
    ctx->pc = 0x1e6654u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1e6658: 0x44130000
    ctx->pc = 0x1e6658u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[0]);
    // 0x1e665c: 0x46800020
    ctx->pc = 0x1e665cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1e6660: 0x26620001
    ctx->pc = 0x1e6660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e6664: 0x44082a
    ctx->pc = 0x1e6664u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1e6668: 0x10200010
    ctx->pc = 0x1E6668u;
    {
        const bool branch_taken_0x1e6668 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E666Cu;
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1e6668) {
            ctx->pc = 0x1E66ACu;
            goto label_1e66ac;
        }
    }
    ctx->pc = 0x1E6670u;
    // 0x1e6670: 0x46141032
    ctx->pc = 0x1e6670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6674: 0x0
    ctx->pc = 0x1e6674u;
    // NOP
    // 0x1e6678: 0x4501000d
    ctx->pc = 0x1E6678u;
    {
        const bool branch_taken_0x1e6678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E667Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e6678) {
            ctx->pc = 0x1E66B0u;
            goto label_1e66b0;
        }
    }
    ctx->pc = 0x1E6680u;
    // 0x1e6680: 0x131080
    ctx->pc = 0x1e6680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e6684: 0x521021
    ctx->pc = 0x1e6684u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e6688: 0x8c420008
    ctx->pc = 0x1e6688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e668c: 0x10400007
    ctx->pc = 0x1E668Cu;
    {
        const bool branch_taken_0x1e668c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6690u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e668c) {
            ctx->pc = 0x1E66ACu;
            goto label_1e66ac;
        }
    }
    ctx->pc = 0x1E6694u;
    // 0x1e6694: 0x72002628
    ctx->pc = 0x1e6694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e6698: 0x72203628
    ctx->pc = 0x1e6698u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e669c: 0x4600a306
    ctx->pc = 0x1e669cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e66a0: 0x72c03e28
    ctx->pc = 0x1e66a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e66a4: 0xc079a4c
    ctx->pc = 0x1E66A4u;
    SET_GPR_U32(ctx, 31, 0x1E66ACu);
    ctx->pc = 0x1E66A8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6930u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii_0x1e6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66ACu; }
        else if (ctx->pc != 0x1E66ACu) { ctx->pc = 0x1E66ACu; }
    }
    if (ctx->pc != 0x1E66ACu) { return; }
    ctx->pc = 0x1E66ACu;
label_1e66ac:
    // 0x1e66ac: 0x3c023f80
    ctx->pc = 0x1e66acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e66b0:
    // 0x1e66b0: 0x44820800
    ctx->pc = 0x1e66b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e66b4: 0x44800000
    ctx->pc = 0x1e66b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e66b8: 0x0
    ctx->pc = 0x1e66b8u;
    // NOP
    // 0x1e66bc: 0x46140b01
    ctx->pc = 0x1e66bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1e66c0: 0x460c0032
    ctx->pc = 0x1e66c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e66c4: 0x0
    ctx->pc = 0x1e66c4u;
    // NOP
    // 0x1e66c8: 0x45010016
    ctx->pc = 0x1E66C8u;
    {
        const bool branch_taken_0x1e66c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E66CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x1e66c8) {
            ctx->pc = 0x1E6724u;
            goto label_1e6724;
        }
    }
    ctx->pc = 0x1E66D0u;
    // 0x1e66d0: 0x521021
    ctx->pc = 0x1e66d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e66d4: 0x8c420004
    ctx->pc = 0x1e66d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e66d8: 0x10400012
    ctx->pc = 0x1E66D8u;
    {
        const bool branch_taken_0x1e66d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E66DCu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e66d8) {
            ctx->pc = 0x1E6724u;
            goto label_1e6724;
        }
    }
    ctx->pc = 0x1E66E0u;
    // 0x1e66e0: 0x72002628
    ctx->pc = 0x1e66e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e66e4: 0x72203628
    ctx->pc = 0x1e66e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e66e8: 0x72c03e28
    ctx->pc = 0x1e66e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e66ec: 0xc079a4c
    ctx->pc = 0x1E66ECu;
    SET_GPR_U32(ctx, 31, 0x1E66F4u);
    ctx->pc = 0x1E66F0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6930u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii_0x1e6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66F4u; }
        else if (ctx->pc != 0x1E66F4u) { ctx->pc = 0x1E66F4u; }
    }
    if (ctx->pc != 0x1E66F4u) { return; }
    ctx->pc = 0x1E66F4u;
    // 0x1e66f4: 0x1000000c
    ctx->pc = 0x1E66F4u;
    {
        const bool branch_taken_0x1e66f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E66F8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x1e66f4) {
            ctx->pc = 0x1E6728u;
            goto label_1e6728;
        }
    }
    ctx->pc = 0x1E66FCu;
label_1e66fc:
    // 0x1e66fc: 0x8e420004
    ctx->pc = 0x1e66fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6700: 0x10400008
    ctx->pc = 0x1E6700u;
    {
        const bool branch_taken_0x1e6700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6704u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e6700) {
            ctx->pc = 0x1E6724u;
            goto label_1e6724;
        }
    }
    ctx->pc = 0x1E6708u;
    // 0x1e6708: 0x3c023f80
    ctx->pc = 0x1e6708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e670c: 0x44826000
    ctx->pc = 0x1e670cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e6710: 0x72002628
    ctx->pc = 0x1e6710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e6714: 0x72203628
    ctx->pc = 0x1e6714u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e6718: 0x72c03e28
    ctx->pc = 0x1e6718u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e671c: 0xc079a4c
    ctx->pc = 0x1E671Cu;
    SET_GPR_U32(ctx, 31, 0x1E6724u);
    ctx->pc = 0x1E6720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6930u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii_0x1e6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6724u; }
        else if (ctx->pc != 0x1E6724u) { ctx->pc = 0x1E6724u; }
    }
    if (ctx->pc != 0x1E6724u) { return; }
    ctx->pc = 0x1E6724u;
label_1e6724:
    // 0x1e6724: 0x8e870000
    ctx->pc = 0x1e6724u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e6728:
    // 0x1e6728: 0x72002628
    ctx->pc = 0x1e6728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e672c: 0x72c03628
    ctx->pc = 0x1e672cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e6730: 0x72a04628
    ctx->pc = 0x1e6730u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e6734: 0xc079af8
    ctx->pc = 0x1E6734u;
    SET_GPR_U32(ctx, 31, 0x1E673Cu);
    ctx->pc = 0x1E6738u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexSet__FP13FACEANIM_BASEP11tagNLpoint3Piii_0x1e6be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E673Cu; }
        else if (ctx->pc != 0x1E673Cu) { ctx->pc = 0x1E673Cu; }
    }
    if (ctx->pc != 0x1E673Cu) { return; }
    ctx->pc = 0x1E673Cu;
    // 0x1e673c: 0xc0552d8
    ctx->pc = 0x1E673Cu;
    SET_GPR_U32(ctx, 31, 0x1E6744u);
    ctx->pc = 0x1E6740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6744u; }
        else if (ctx->pc != 0x1E6744u) { ctx->pc = 0x1E6744u; }
    }
    if (ctx->pc != 0x1E6744u) { return; }
    ctx->pc = 0x1E6744u;
    // 0x1e6744: 0xc0687c0
    ctx->pc = 0x1E6744u;
    SET_GPR_U32(ctx, 31, 0x1E674Cu);
    ctx->pc = 0x1E6748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E674Cu; }
        else if (ctx->pc != 0x1E674Cu) { ctx->pc = 0x1E674Cu; }
    }
    if (ctx->pc != 0x1E674Cu) { return; }
    ctx->pc = 0x1E674Cu;
label_1e674c:
    // 0x1e674c: 0x7bbf0080
    ctx->pc = 0x1e674cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6750: 0x7bb60070
    ctx->pc = 0x1e6750u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e6754: 0x7bb50060
    ctx->pc = 0x1e6754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6758: 0x7bb40050
    ctx->pc = 0x1e6758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e675c: 0x7bb30040
    ctx->pc = 0x1e675cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6760: 0x7bb20030
    ctx->pc = 0x1e6760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6764: 0x7bb10020
    ctx->pc = 0x1e6764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6768: 0x7bb00010
    ctx->pc = 0x1e6768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e676c: 0xc7b40000
    ctx->pc = 0x1e676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6770: 0x3e00008
    ctx->pc = 0x1E6770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E65C0u: goto label_1e65c0;
            case 0x1E660Cu: goto label_1e660c;
            case 0x1E6618u: goto label_1e6618;
            case 0x1E66ACu: goto label_1e66ac;
            case 0x1E66B0u: goto label_1e66b0;
            case 0x1E66FCu: goto label_1e66fc;
            case 0x1E6724u: goto label_1e6724;
            case 0x1E6728u: goto label_1e6728;
            case 0x1E674Cu: goto label_1e674c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6778u;
}
