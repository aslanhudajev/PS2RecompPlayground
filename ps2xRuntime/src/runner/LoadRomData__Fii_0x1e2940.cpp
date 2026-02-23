#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LoadRomData__Fii
// Address: 0x1e2940 - 0x1e2a50
void LoadRomData__Fii_0x1e2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LoadRomData__Fii");


    ctx->pc = 0x1e2940u;

    // 0x1e2940: 0x27bdffc0
    ctx->pc = 0x1e2940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e2944: 0x7fbf0030
    ctx->pc = 0x1e2944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e2948: 0x7fb20020
    ctx->pc = 0x1e2948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e294c: 0x7fb10010
    ctx->pc = 0x1e294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2950: 0x70a08e28
    ctx->pc = 0x1e2950u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e2954: 0x24030001
    ctx->pc = 0x1e2954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2958: 0x7fb00000
    ctx->pc = 0x1e2958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e295c: 0x12230023
    ctx->pc = 0x1E295Cu;
    {
        const bool branch_taken_0x1e295c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E2960u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e295c) {
            ctx->pc = 0x1E29ECu;
            goto label_1e29ec;
        }
    }
    ctx->pc = 0x1E2964u;
    // 0x1e2964: 0x12200003
    ctx->pc = 0x1E2964u;
    {
        const bool branch_taken_0x1e2964 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937360));
        if (branch_taken_0x1e2964) {
            ctx->pc = 0x1E2974u;
            goto label_1e2974;
        }
    }
    ctx->pc = 0x1E296Cu;
    // 0x1e296c: 0x10000032
    ctx->pc = 0x1E296Cu;
    {
        const bool branch_taken_0x1e296c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2970u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e296c) {
            ctx->pc = 0x1E2A38u;
            goto label_1e2a38;
        }
    }
    ctx->pc = 0x1E2974u;
label_1e2974:
    // 0x1e2974: 0x521021
    ctx->pc = 0x1e2974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e2978: 0x80420000
    ctx->pc = 0x1e2978u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e297c: 0x1043002d
    ctx->pc = 0x1E297Cu;
    {
        const bool branch_taken_0x1e297c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E2980u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x1e297c) {
            ctx->pc = 0x1E2A34u;
            goto label_1e2a34;
        }
    }
    ctx->pc = 0x1E2984u;
    // 0x1e2984: 0x128080
    ctx->pc = 0x1e2984u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e2988: 0x24429a00
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941184));
    // 0x1e298c: 0x501021
    ctx->pc = 0x1e298cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e2990: 0x8c460000
    ctx->pc = 0x1e2990u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2994: 0x3c020050
    ctx->pc = 0x1e2994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2998: 0x24440b40
    ctx->pc = 0x1e2998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x1e299c: 0x3c020027
    ctx->pc = 0x1e299cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e29a0: 0xc07a5ac
    ctx->pc = 0x1E29A0u;
    SET_GPR_U32(ctx, 31, 0x1E29A8u);
    ctx->pc = 0x1E29A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294941208));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29A8u; }
        else if (ctx->pc != 0x1E29A8u) { ctx->pc = 0x1E29A8u; }
    }
    if (ctx->pc != 0x1E29A8u) { return; }
    ctx->pc = 0x1E29A8u;
    // 0x1e29a8: 0x70402628
    ctx->pc = 0x1e29a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e29ac: 0xc05ad72
    ctx->pc = 0x1E29ACu;
    SET_GPR_U32(ctx, 31, 0x1E29B4u);
    ctx->pc = 0x1E29B0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29B4u; }
        else if (ctx->pc != 0x1E29B4u) { ctx->pc = 0x1E29B4u; }
    }
    if (ctx->pc != 0x1E29B4u) { return; }
    ctx->pc = 0x1E29B4u;
    // 0x1e29b4: 0x3c010050
    ctx->pc = 0x1e29b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e29b8: 0xac220c64
    ctx->pc = 0x1e29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3172), GPR_U32(ctx, 2));
    // 0x1e29bc: 0x3c010050
    ctx->pc = 0x1e29bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e29c0: 0xc05afe2
    ctx->pc = 0x1E29C0u;
    SET_GPR_U32(ctx, 31, 0x1E29C8u);
    ctx->pc = 0x1E29C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3172)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29C8u; }
        else if (ctx->pc != 0x1E29C8u) { ctx->pc = 0x1E29C8u; }
    }
    if (ctx->pc != 0x1E29C8u) { return; }
    ctx->pc = 0x1E29C8u;
    // 0x1e29c8: 0x70402e28
    ctx->pc = 0x1e29c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e29cc: 0x3c020027
    ctx->pc = 0x1e29ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e29d0: 0x24429980
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x1e29d4: 0x501021
    ctx->pc = 0x1e29d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e29d8: 0x3c010050
    ctx->pc = 0x1e29d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e29dc: 0x8c240c64
    ctx->pc = 0x1e29dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3172)));
    // 0x1e29e0: 0xc05aeba
    ctx->pc = 0x1E29E0u;
    SET_GPR_U32(ctx, 31, 0x1E29E8u);
    ctx->pc = 0x1E29E4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29E8u; }
        else if (ctx->pc != 0x1E29E8u) { ctx->pc = 0x1E29E8u; }
    }
    if (ctx->pc != 0x1E29E8u) { return; }
    ctx->pc = 0x1E29E8u;
    // 0x1e29e8: 0x26310001
    ctx->pc = 0x1e29e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e29ec:
    // 0x1e29ec: 0x3c010050
    ctx->pc = 0x1e29ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e29f0: 0xc05b018
    ctx->pc = 0x1E29F0u;
    SET_GPR_U32(ctx, 31, 0x1E29F8u);
    ctx->pc = 0x1E29F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3172)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29F8u; }
        else if (ctx->pc != 0x1E29F8u) { ctx->pc = 0x1E29F8u; }
    }
    if (ctx->pc != 0x1E29F8u) { return; }
    ctx->pc = 0x1E29F8u;
    // 0x1e29f8: 0x24030001
    ctx->pc = 0x1e29f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e29fc: 0x10430004
    ctx->pc = 0x1E29FCu;
    {
        const bool branch_taken_0x1e29fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E2A00u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e29fc) {
            ctx->pc = 0x1E2A10u;
            goto label_1e2a10;
        }
    }
    ctx->pc = 0x1E2A04u;
    // 0x1e2a04: 0x24030003
    ctx->pc = 0x1e2a04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2a08: 0x1443000a
    ctx->pc = 0x1E2A08u;
    {
        const bool branch_taken_0x1e2a08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e2a08) {
            ctx->pc = 0x1E2A34u;
            goto label_1e2a34;
        }
    }
    ctx->pc = 0x1E2A10u;
label_1e2a10:
    // 0x1e2a10: 0xc05ae0c
    ctx->pc = 0x1E2A10u;
    SET_GPR_U32(ctx, 31, 0x1E2A18u);
    ctx->pc = 0x1E2A14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3172)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A18u; }
        else if (ctx->pc != 0x1E2A18u) { ctx->pc = 0x1E2A18u; }
    }
    if (ctx->pc != 0x1E2A18u) { return; }
    ctx->pc = 0x1E2A18u;
    // 0x1e2a18: 0x3c010050
    ctx->pc = 0x1e2a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2a1c: 0x27828b10
    ctx->pc = 0x1e2a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937360));
    // 0x1e2a20: 0xac200c64
    ctx->pc = 0x1e2a20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3172), GPR_U32(ctx, 0));
    // 0x1e2a24: 0x24030001
    ctx->pc = 0x1e2a24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2a28: 0x521021
    ctx->pc = 0x1e2a28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e2a2c: 0xa0430000
    ctx->pc = 0x1e2a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e2a30: 0x70008e28
    ctx->pc = 0x1e2a30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e2a34:
    // 0x1e2a34: 0x72201628
    ctx->pc = 0x1e2a34u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e2a38:
    // 0x1e2a38: 0x7bbf0030
    ctx->pc = 0x1e2a38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2a3c: 0x7bb20020
    ctx->pc = 0x1e2a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2a40: 0x7bb10010
    ctx->pc = 0x1e2a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2a44: 0x7bb00000
    ctx->pc = 0x1e2a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2a48: 0x3e00008
    ctx->pc = 0x1E2A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2A4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2974u: goto label_1e2974;
            case 0x1E29ECu: goto label_1e29ec;
            case 0x1E2A10u: goto label_1e2a10;
            case 0x1E2A34u: goto label_1e2a34;
            case 0x1E2A38u: goto label_1e2a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2A50u;
}
