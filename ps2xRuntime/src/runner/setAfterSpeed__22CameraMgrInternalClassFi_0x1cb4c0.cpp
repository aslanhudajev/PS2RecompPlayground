#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setAfterSpeed__22CameraMgrInternalClassFi
// Address: 0x1cb4c0 - 0x1cb608
void setAfterSpeed__22CameraMgrInternalClassFi_0x1cb4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setAfterSpeed__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cb4c0u;

    // 0x1cb4c0: 0x27bdffc0
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb4c4: 0x7fbf0030
    ctx->pc = 0x1cb4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1cb4c8: 0x7fb20020
    ctx->pc = 0x1cb4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb4cc: 0x7fb10010
    ctx->pc = 0x1cb4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb4d0: 0x7fb00000
    ctx->pc = 0x1cb4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb4d4: 0x8f838c48
    ctx->pc = 0x1cb4d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cb4d8: 0x51040
    ctx->pc = 0x1cb4d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cb4dc: 0x451021
    ctx->pc = 0x1cb4dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb4e0: 0x21080
    ctx->pc = 0x1cb4e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb4e4: 0x451021
    ctx->pc = 0x1cb4e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb4e8: 0x21100
    ctx->pc = 0x1cb4e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cb4ec: 0x621821
    ctx->pc = 0x1cb4ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb4f0: 0x510c0
    ctx->pc = 0x1cb4f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb4f4: 0x451021
    ctx->pc = 0x1cb4f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb4f8: 0x28980
    ctx->pc = 0x1cb4f8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cb4fc: 0x2241021
    ctx->pc = 0x1cb4fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1cb500: 0xc4660098
    ctx->pc = 0x1cb500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1cb504: 0xc46300b0
    ctx->pc = 0x1cb504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb508: 0xc440001c
    ctx->pc = 0x1cb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb50c: 0xc4670094
    ctx->pc = 0x1cb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1cb510: 0xc46400ac
    ctx->pc = 0x1cb510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cb514: 0xc4410018
    ctx->pc = 0x1cb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb518: 0xc4680090
    ctx->pc = 0x1cb518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1cb51c: 0xc46500a8
    ctx->pc = 0x1cb51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cb520: 0xc4420014
    ctx->pc = 0x1cb520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb524: 0x46061b81
    ctx->pc = 0x1cb524u;
    ctx->f[14] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1cb528: 0x70809628
    ctx->pc = 0x1cb528u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cb52c: 0x24700010
    ctx->pc = 0x1cb52cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1cb530: 0x46082b01
    ctx->pc = 0x1cb530u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x1cb534: 0x460813c1
    ctx->pc = 0x1cb534u;
    ctx->f[15] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x1cb538: 0x46072341
    ctx->pc = 0x1cb538u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x1cb53c: 0x46070c01
    ctx->pc = 0x1cb53cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x1cb540: 0xc072578
    ctx->pc = 0x1CB540u;
    SET_GPR_U32(ctx, 31, 0x1CB548u);
    ctx->pc = 0x1CB544u;
    ctx->f[17] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    ctx->pc = 0x1C95E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        VecAng__Fffffff_0x1c95e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB548u; }
        else if (ctx->pc != 0x1CB548u) { ctx->pc = 0x1CB548u; }
    }
    if (ctx->pc != 0x1CB548u) { return; }
    ctx->pc = 0x1CB548u;
    // 0x1cb548: 0x3043ffff
    ctx->pc = 0x1cb548u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1cb54c: 0x28632000
    ctx->pc = 0x1cb54cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 8192));
    // 0x1cb550: 0x14600002
    ctx->pc = 0x1CB550u;
    {
        const bool branch_taken_0x1cb550 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB554u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cb550) {
            ctx->pc = 0x1CB55Cu;
            goto label_1cb55c;
        }
    }
    ctx->pc = 0x1CB558u;
    // 0x1cb558: 0x24051fff
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8191));
label_1cb55c:
    // 0x1cb55c: 0x820300c3
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 195)));
    // 0x1cb560: 0x24040001
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb564: 0x10640007
    ctx->pc = 0x1CB564u;
    {
        const bool branch_taken_0x1cb564 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1CB568u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1cb564) {
            ctx->pc = 0x1CB584u;
            goto label_1cb584;
        }
    }
    ctx->pc = 0x1CB56Cu;
    // 0x1cb56c: 0x2321821
    ctx->pc = 0x1cb56cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1cb570: 0x80630048
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1cb574: 0x28610006
    ctx->pc = 0x1cb574u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 6));
    // 0x1cb578: 0x10000002
    ctx->pc = 0x1CB578u;
    {
        const bool branch_taken_0x1cb578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB57Cu;
        if (GPR_U32(ctx, 1) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
        if (branch_taken_0x1cb578) {
            ctx->pc = 0x1CB584u;
            goto label_1cb584;
        }
    }
    ctx->pc = 0x1CB580u;
    // 0x1cb580: 0x24030002
    ctx->pc = 0x1cb580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1cb584:
    // 0x1cb584: 0x32080
    ctx->pc = 0x1cb584u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb588: 0x3c030026
    ctx->pc = 0x1cb588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1cb58c: 0x246350d0
    ctx->pc = 0x1cb58cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20688));
    // 0x1cb590: 0x642021
    ctx->pc = 0x1cb590u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb594: 0x4a10003
    ctx->pc = 0x1CB594u;
    {
        const bool branch_taken_0x1cb594 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1CB598u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 7));
        if (branch_taken_0x1cb594) {
            ctx->pc = 0x1CB5A4u;
            goto label_1cb5a4;
        }
    }
    ctx->pc = 0x1CB59Cu;
    // 0x1cb59c: 0x24a3007f
    ctx->pc = 0x1cb59cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 127));
    // 0x1cb5a0: 0x331c3
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
label_1cb5a4:
    // 0x1cb5a4: 0x8c850000
    ctx->pc = 0x1cb5a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb5a8: 0x2321821
    ctx->pc = 0x1cb5a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1cb5ac: 0xa62821
    ctx->pc = 0x1cb5acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cb5b0: 0x80a60000
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb5b4: 0x3c048888
    ctx->pc = 0x1cb5b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34952 << 16));
    // 0x1cb5b8: 0x34848889
    ctx->pc = 0x1cb5b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 34953));
    // 0x1cb5bc: 0x62880
    ctx->pc = 0x1cb5bcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb5c0: 0xa63021
    ctx->pc = 0x1cb5c0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cb5c4: 0x62880
    ctx->pc = 0x1cb5c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb5c8: 0xc52821
    ctx->pc = 0x1cb5c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cb5cc: 0x53040
    ctx->pc = 0x1cb5ccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cb5d0: 0x860018
    ctx->pc = 0x1cb5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1cb5d4: 0x62fc2
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cb5d8: 0x0
    ctx->pc = 0x1cb5d8u;
    // NOP
    // 0x1cb5dc: 0x2010
    ctx->pc = 0x1cb5dcu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x1cb5e0: 0x862021
    ctx->pc = 0x1cb5e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1cb5e4: 0x42143
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1cb5e8: 0x852021
    ctx->pc = 0x1cb5e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cb5ec: 0xa4640044
    ctx->pc = 0x1cb5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cb5f0: 0x7bbf0030
    ctx->pc = 0x1cb5f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb5f4: 0x7bb20020
    ctx->pc = 0x1cb5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb5f8: 0x7bb10010
    ctx->pc = 0x1cb5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb5fc: 0x7bb00000
    ctx->pc = 0x1cb5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb600: 0x3e00008
    ctx->pc = 0x1CB600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB604u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB55Cu: goto label_1cb55c;
            case 0x1CB584u: goto label_1cb584;
            case 0x1CB5A4u: goto label_1cb5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB608u;
}
