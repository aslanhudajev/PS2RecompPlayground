#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__16FaceAnimMgrClassFiifPii
// Address: 0x1e5960 - 0x1e5c1c
void ctrl__16FaceAnimMgrClassFiifPii_0x1e5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__16FaceAnimMgrClassFiifPii");


    ctx->pc = 0x1e5960u;

    // 0x1e5960: 0x27bdff40
    ctx->pc = 0x1e5960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e5964: 0x7fbf00a0
    ctx->pc = 0x1e5964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1e5968: 0x7fbe0090
    ctx->pc = 0x1e5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e596c: 0x7fb70080
    ctx->pc = 0x1e596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1e5970: 0x7fb60070
    ctx->pc = 0x1e5970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e5974: 0x7fb50060
    ctx->pc = 0x1e5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e5978: 0x7fb40050
    ctx->pc = 0x1e5978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e597c: 0x7fb30040
    ctx->pc = 0x1e597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e5980: 0x7fb20030
    ctx->pc = 0x1e5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e5984: 0x7fb10020
    ctx->pc = 0x1e5984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5988: 0x7fb00010
    ctx->pc = 0x1e5988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e598c: 0x61840
    ctx->pc = 0x1e598cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e5990: 0x70c08628
    ctx->pc = 0x1e5990u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e5994: 0x661821
    ctx->pc = 0x1e5994u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e5998: 0x33080
    ctx->pc = 0x1e5998u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e599c: 0x70a08e28
    ctx->pc = 0x1e599cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e59a0: 0x3c03002c
    ctx->pc = 0x1e59a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1e59a4: 0xe7b40000
    ctx->pc = 0x1e59a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e59a8: 0x2463f4c0
    ctx->pc = 0x1e59a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964416));
    // 0x1e59ac: 0x2a210072
    ctx->pc = 0x1e59acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 114));
    // 0x1e59b0: 0x46006506
    ctx->pc = 0x1e59b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e59b4: 0x70e0ae28
    ctx->pc = 0x1e59b4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e59b8: 0x7100f628
    ctx->pc = 0x1e59b8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1e59bc: 0x70809e28
    ctx->pc = 0x1e59bcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e59c0: 0x10200089
    ctx->pc = 0x1E59C0u;
    {
        const bool branch_taken_0x1e59c0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E59C4u;
        SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        if (branch_taken_0x1e59c0) {
            ctx->pc = 0x1E5BE8u;
            goto label_1e5be8;
        }
    }
    ctx->pc = 0x1E59C8u;
    // 0x1e59c8: 0xc079708
    ctx->pc = 0x1E59C8u;
    SET_GPR_U32(ctx, 31, 0x1E59D0u);
    ctx->pc = 0x1E5C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        data_set__16FaceAnimMgrClassFi_0x1e5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59D0u; }
        else if (ctx->pc != 0x1E59D0u) { ctx->pc = 0x1E59D0u; }
    }
    if (ctx->pc != 0x1E59D0u) { return; }
    ctx->pc = 0x1E59D0u;
    // 0x1e59d0: 0x3c030050
    ctx->pc = 0x1e59d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e59d4: 0x118880
    ctx->pc = 0x1e59d4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e59d8: 0x246308b0
    ctx->pc = 0x1e59d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1e59dc: 0x719021
    ctx->pc = 0x1e59dcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e59e0: 0x8e430000
    ctx->pc = 0x1e59e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e59e4: 0x18600080
    ctx->pc = 0x1E59E4u;
    {
        const bool branch_taken_0x1e59e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E59E8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e59e4) {
            ctx->pc = 0x1E5BE8u;
            goto label_1e5be8;
        }
    }
    ctx->pc = 0x1E59ECu;
    // 0x1e59ec: 0xc079808
    ctx->pc = 0x1E59ECu;
    SET_GPR_U32(ctx, 31, 0x1E59F4u);
    ctx->pc = 0x1E59F0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6020u;
    {
        const uint32_t __entryPc = ctx->pc;
        mot_set__16FaceAnimMgrClassFi_0x1e6020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59F4u; }
        else if (ctx->pc != 0x1E59F4u) { ctx->pc = 0x1E59F4u; }
    }
    if (ctx->pc != 0x1E59F4u) { return; }
    ctx->pc = 0x1E59F4u;
    // 0x1e59f4: 0x3c030027
    ctx->pc = 0x1e59f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1e59f8: 0x2463a940
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945088));
    // 0x1e59fc: 0x711821
    ctx->pc = 0x1e59fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e5a00: 0x8c670000
    ctx->pc = 0x1e5a00u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5a04: 0x3405ffff
    ctx->pc = 0x1e5a04u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e5a08: 0x73403
    ctx->pc = 0x1e5a08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1e5a0c: 0x3c030050
    ctx->pc = 0x1e5a0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e5a10: 0xc52824
    ctx->pc = 0x1e5a10u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e5a14: 0x2464ea20
    ctx->pc = 0x1e5a14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x1e5a18: 0x52900
    ctx->pc = 0x1e5a18u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e5a1c: 0x852021
    ctx->pc = 0x1e5a1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e5a20: 0x8c840000
    ctx->pc = 0x1e5a20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5a24: 0x3c038000
    ctx->pc = 0x1e5a24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1e5a28: 0x831824
    ctx->pc = 0x1e5a28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5a2c: 0x1060006e
    ctx->pc = 0x1E5A2Cu;
    {
        const bool branch_taken_0x1e5a2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5a2c) {
            ctx->pc = 0x1E5BE8u;
            goto label_1e5be8;
        }
    }
    ctx->pc = 0x1E5A34u;
    // 0x1e5a34: 0x8e430000
    ctx->pc = 0x1e5a34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e5a38: 0x2402ffc0
    ctx->pc = 0x1e5a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e5a3c: 0x2463003f
    ctx->pc = 0x1e5a3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e5a40: 0x16a0000e
    ctx->pc = 0x1E5A40u;
    {
        const bool branch_taken_0x1e5a40 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5A44u;
        SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e5a40) {
            ctx->pc = 0x1E5A7Cu;
            goto label_1e5a7c;
        }
    }
    ctx->pc = 0x1E5A48u;
    // 0x1e5a48: 0x30c2ffff
    ctx->pc = 0x1e5a48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1e5a4c: 0x21900
    ctx->pc = 0x1e5a4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e5a50: 0x3c020050
    ctx->pc = 0x1e5a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5a54: 0x2442ea24
    ctx->pc = 0x1e5a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1e5a58: 0x431021
    ctx->pc = 0x1e5a58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5a5c: 0x8c420000
    ctx->pc = 0x1e5a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5a60: 0x30e4ffff
    ctx->pc = 0x1e5a60u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 65535));
    // 0x1e5a64: 0x41840
    ctx->pc = 0x1e5a64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e5a68: 0x641821
    ctx->pc = 0x1e5a68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5a6c: 0x31880
    ctx->pc = 0x1e5a6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5a70: 0x431021
    ctx->pc = 0x1e5a70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5a74: 0x8c550000
    ctx->pc = 0x1e5a74u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5a78: 0x0
    ctx->pc = 0x1e5a78u;
    // NOP
label_1e5a7c:
    // 0x1e5a7c: 0x8e820004
    ctx->pc = 0x1e5a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e5a80: 0x8e830000
    ctx->pc = 0x1e5a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e5a84: 0x26910004
    ctx->pc = 0x1e5a84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e5a88: 0x2821021
    ctx->pc = 0x1e5a88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e5a8c: 0xafa200b0
    ctx->pc = 0x1e5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1e5a90: 0x31040
    ctx->pc = 0x1e5a90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e5a94: 0x431021
    ctx->pc = 0x1e5a94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5a98: 0xc06878c
    ctx->pc = 0x1E5A98u;
    SET_GPR_U32(ctx, 31, 0x1E5AA0u);
    ctx->pc = 0x1E5A9Cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AA0u; }
        else if (ctx->pc != 0x1E5AA0u) { ctx->pc = 0x1E5AA0u; }
    }
    if (ctx->pc != 0x1E5AA0u) { return; }
    ctx->pc = 0x1E5AA0u;
    // 0x1e5aa0: 0x7040b628
    ctx->pc = 0x1e5aa0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5aa4: 0x3c020050
    ctx->pc = 0x1e5aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5aa8: 0x101880
    ctx->pc = 0x1e5aa8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e5aac: 0x24420a80
    ctx->pc = 0x1e5aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1e5ab0: 0x4600a024
    ctx->pc = 0x1e5ab0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x1e5ab4: 0x439821
    ctx->pc = 0x1e5ab4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5ab8: 0x8e620000
    ctx->pc = 0x1e5ab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e5abc: 0x44120000
    ctx->pc = 0x1e5abcu;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[0]);
    // 0x1e5ac0: 0x1c400004
    ctx->pc = 0x1E5AC0u;
    {
        const bool branch_taken_0x1e5ac0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E5AC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1e5ac0) {
            ctx->pc = 0x1E5AD4u;
            goto label_1e5ad4;
        }
    }
    ctx->pc = 0x1E5AC8u;
    // 0x1e5ac8: 0x72002e28
    ctx->pc = 0x1e5ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e5acc: 0xc086414
    ctx->pc = 0x1E5ACCu;
    SET_GPR_U32(ctx, 31, 0x1E5AD4u);
    ctx->pc = 0x1E5AD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219050u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotDataImm__13EntryDatClassFi_0x219050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AD4u; }
        else if (ctx->pc != 0x1E5AD4u) { ctx->pc = 0x1E5AD4u; }
    }
    if (ctx->pc != 0x1E5AD4u) { return; }
    ctx->pc = 0x1E5AD4u;
label_1e5ad4:
    // 0x1e5ad4: 0x8ee50004
    ctx->pc = 0x1e5ad4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1e5ad8: 0x8e630000
    ctx->pc = 0x1e5ad8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e5adc: 0x2402ffc0
    ctx->pc = 0x1e5adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e5ae0: 0x245001a
    ctx->pc = 0x1e5ae0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1e5ae4: 0x2463003f
    ctx->pc = 0x1e5ae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e5ae8: 0x14a00002
    ctx->pc = 0x1E5AE8u;
    {
        const bool branch_taken_0x1e5ae8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5AECu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e5ae8) {
            ctx->pc = 0x1E5AF4u;
            goto label_1e5af4;
        }
    }
    ctx->pc = 0x1E5AF0u;
    // 0x1e5af0: 0x1cd
    ctx->pc = 0x1e5af0u;
    runtime->handleBreak(rdram, ctx);
label_1e5af4:
    // 0x1e5af4: 0x8ee60000
    ctx->pc = 0x1e5af4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e5af8: 0x1810
    ctx->pc = 0x1e5af8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1e5afc: 0x44920000
    ctx->pc = 0x1e5afcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x1e5b00: 0x26420001
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e5b04: 0x46800020
    ctx->pc = 0x1e5b04u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1e5b08: 0x70008628
    ctx->pc = 0x1e5b08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e5b0c: 0xc31818
    ctx->pc = 0x1e5b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1e5b10: 0x45001a
    ctx->pc = 0x1e5b10u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1e5b14: 0x4600a501
    ctx->pc = 0x1e5b14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1e5b18: 0x31080
    ctx->pc = 0x1e5b18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5b1c: 0x14a00002
    ctx->pc = 0x1E5B1Cu;
    {
        const bool branch_taken_0x1e5b1c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5B20u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e5b1c) {
            ctx->pc = 0x1E5B28u;
            goto label_1e5b28;
        }
    }
    ctx->pc = 0x1E5B24u;
    // 0x1e5b24: 0x1cd
    ctx->pc = 0x1e5b24u;
    runtime->handleBreak(rdram, ctx);
label_1e5b28:
    // 0x1e5b28: 0x1010
    ctx->pc = 0x1e5b28u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1e5b2c: 0xc21018
    ctx->pc = 0x1e5b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1e5b30: 0x21080
    ctx->pc = 0x1e5b30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5b34: 0x1000001e
    ctx->pc = 0x1E5B34u;
    {
        const bool branch_taken_0x1e5b34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5B38u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e5b34) {
            ctx->pc = 0x1E5BB0u;
            goto label_1e5bb0;
        }
    }
    ctx->pc = 0x1E5B3Cu;
label_1e5b3c:
    // 0x1e5b3c: 0x5080001b
    ctx->pc = 0x1E5B3Cu;
    {
        const bool branch_taken_0x1e5b3c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5b3c) {
            ctx->pc = 0x1E5B40u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
            ctx->pc = 0x1E5BACu;
            goto label_1e5bac;
        }
    }
    ctx->pc = 0x1E5B44u;
    // 0x1e5b44: 0x24020001
    ctx->pc = 0x1e5b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5b48: 0x2021804
    ctx->pc = 0x1e5b48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x1e5b4c: 0x8ee20008
    ctx->pc = 0x1e5b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e5b50: 0x431024
    ctx->pc = 0x1e5b50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5b54: 0x10400014
    ctx->pc = 0x1E5B54u;
    {
        const bool branch_taken_0x1e5b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5b54) {
            ctx->pc = 0x1E5BA8u;
            goto label_1e5ba8;
        }
    }
    ctx->pc = 0x1E5B5Cu;
    // 0x1e5b5c: 0xc6420000
    ctx->pc = 0x1e5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5b60: 0xc6610000
    ctx->pc = 0x1e5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5b64: 0x44800000
    ctx->pc = 0x1e5b64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e5b68: 0x0
    ctx->pc = 0x1e5b68u;
    // NOP
    // 0x1e5b6c: 0x46020841
    ctx->pc = 0x1e5b6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e5b70: 0x4601a042
    ctx->pc = 0x1e5b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1e5b74: 0x46011300
    ctx->pc = 0x1e5b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e5b78: 0x460c0032
    ctx->pc = 0x1e5b78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5b7c: 0x0
    ctx->pc = 0x1e5b7cu;
    // NOP
    // 0x1e5b80: 0x45030008
    ctx->pc = 0x1E5B80u;
    {
        const bool branch_taken_0x1e5b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5b80) {
            ctx->pc = 0x1E5B84u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
            ctx->pc = 0x1E5BA4u;
            goto label_1e5ba4;
        }
    }
    ctx->pc = 0x1E5B88u;
    // 0x1e5b88: 0x2842821
    ctx->pc = 0x1e5b88u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1e5b8c: 0x8fa400b0
    ctx->pc = 0x1e5b8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e5b90: 0x72c03628
    ctx->pc = 0x1e5b90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e5b94: 0x72a03e28
    ctx->pc = 0x1e5b94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e5b98: 0xc079a4c
    ctx->pc = 0x1E5B98u;
    SET_GPR_U32(ctx, 31, 0x1E5BA0u);
    ctx->pc = 0x1E5B9Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6930u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii_0x1e6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BA0u; }
        else if (ctx->pc != 0x1E5BA0u) { ctx->pc = 0x1E5BA0u; }
    }
    if (ctx->pc != 0x1E5BA0u) { return; }
    ctx->pc = 0x1E5BA0u;
    // 0x1e5ba0: 0x26520004
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_1e5ba4:
    // 0x1e5ba4: 0x26730004
    ctx->pc = 0x1e5ba4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_1e5ba8:
    // 0x1e5ba8: 0x26310004
    ctx->pc = 0x1e5ba8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1e5bac:
    // 0x1e5bac: 0x26100001
    ctx->pc = 0x1e5bacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e5bb0:
    // 0x1e5bb0: 0x8e240004
    ctx->pc = 0x1e5bb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5bb4: 0x2402ffff
    ctx->pc = 0x1e5bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5bb8: 0x1482ffe0
    ctx->pc = 0x1E5BB8u;
    {
        const bool branch_taken_0x1e5bb8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e5bb8) {
            ctx->pc = 0x1E5B3Cu;
            goto label_1e5b3c;
        }
    }
    ctx->pc = 0x1E5BC0u;
    // 0x1e5bc0: 0x8fa400b0
    ctx->pc = 0x1e5bc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e5bc4: 0x8e870000
    ctx->pc = 0x1e5bc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e5bc8: 0x72a03628
    ctx->pc = 0x1e5bc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e5bcc: 0x73c04628
    ctx->pc = 0x1e5bccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1e5bd0: 0xc079af8
    ctx->pc = 0x1E5BD0u;
    SET_GPR_U32(ctx, 31, 0x1E5BD8u);
    ctx->pc = 0x1E5BD4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexSet__FP13FACEANIM_BASEP11tagNLpoint3Piii_0x1e6be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BD8u; }
        else if (ctx->pc != 0x1E5BD8u) { ctx->pc = 0x1E5BD8u; }
    }
    if (ctx->pc != 0x1E5BD8u) { return; }
    ctx->pc = 0x1E5BD8u;
    // 0x1e5bd8: 0xc0552d8
    ctx->pc = 0x1E5BD8u;
    SET_GPR_U32(ctx, 31, 0x1E5BE0u);
    ctx->pc = 0x1E5BDCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BE0u; }
        else if (ctx->pc != 0x1E5BE0u) { ctx->pc = 0x1E5BE0u; }
    }
    if (ctx->pc != 0x1E5BE0u) { return; }
    ctx->pc = 0x1E5BE0u;
    // 0x1e5be0: 0xc0687c0
    ctx->pc = 0x1E5BE0u;
    SET_GPR_U32(ctx, 31, 0x1E5BE8u);
    ctx->pc = 0x1E5BE4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BE8u; }
        else if (ctx->pc != 0x1E5BE8u) { ctx->pc = 0x1E5BE8u; }
    }
    if (ctx->pc != 0x1E5BE8u) { return; }
    ctx->pc = 0x1E5BE8u;
label_1e5be8:
    // 0x1e5be8: 0x7bbf00a0
    ctx->pc = 0x1e5be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e5bec: 0x7bbe0090
    ctx->pc = 0x1e5becu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e5bf0: 0x7bb70080
    ctx->pc = 0x1e5bf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5bf4: 0x7bb60070
    ctx->pc = 0x1e5bf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5bf8: 0x7bb50060
    ctx->pc = 0x1e5bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5bfc: 0x7bb40050
    ctx->pc = 0x1e5bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5c00: 0x7bb30040
    ctx->pc = 0x1e5c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5c04: 0x7bb20030
    ctx->pc = 0x1e5c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5c08: 0x7bb10020
    ctx->pc = 0x1e5c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5c0c: 0x7bb00010
    ctx->pc = 0x1e5c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5c10: 0xc7b40000
    ctx->pc = 0x1e5c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5c14: 0x3e00008
    ctx->pc = 0x1E5C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5C18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5A7Cu: goto label_1e5a7c;
            case 0x1E5AD4u: goto label_1e5ad4;
            case 0x1E5AF4u: goto label_1e5af4;
            case 0x1E5B28u: goto label_1e5b28;
            case 0x1E5B3Cu: goto label_1e5b3c;
            case 0x1E5BA4u: goto label_1e5ba4;
            case 0x1E5BA8u: goto label_1e5ba8;
            case 0x1E5BACu: goto label_1e5bac;
            case 0x1E5BB0u: goto label_1e5bb0;
            case 0x1E5BE8u: goto label_1e5be8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5C1Cu;
}
