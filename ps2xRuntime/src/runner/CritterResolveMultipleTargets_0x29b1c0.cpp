#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterResolveMultipleTargets
// Address: 0x29b1c0 - 0x29b3bc
void CritterResolveMultipleTargets_0x29b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b1c0u;

    // 0x29b1c0: 0x80602d
    ctx->pc = 0x29b1c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1c4: 0x81820487
    ctx->pc = 0x29b1c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 1159)));
    // 0x29b1c8: 0x1840007a
    ctx->pc = 0x29B1C8u;
    {
        const bool branch_taken_0x29b1c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29b1c8) {
            ctx->pc = 0x29B3B4u;
            goto label_29b3b4;
        }
    }
    ctx->pc = 0x29B1D0u;
    // 0x29b1d0: 0x85820128
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 296)));
    // 0x29b1d4: 0x4410077
    ctx->pc = 0x29B1D4u;
    {
        const bool branch_taken_0x29b1d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29b1d4) {
            ctx->pc = 0x29B3B4u;
            goto label_29b3b4;
        }
    }
    ctx->pc = 0x29B1DCu;
    // 0x29b1dc: 0x85820136
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 310)));
    // 0x29b1e0: 0x18400074
    ctx->pc = 0x29B1E0u;
    {
        const bool branch_taken_0x29b1e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B1E4u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b1e0) {
            ctx->pc = 0x29B3B4u;
            goto label_29b3b4;
        }
    }
    ctx->pc = 0x29B1E8u;
    // 0x29b1e8: 0x240f0030
    ctx->pc = 0x29b1e8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29b1ec: 0x3c013f80
    ctx->pc = 0x29b1ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29b1f0: 0x44812800
    ctx->pc = 0x29b1f0u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x29b1f4: 0x3c013f40
    ctx->pc = 0x29b1f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x29b1f8: 0x44812000
    ctx->pc = 0x29b1f8u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x29b1fc: 0x3c020036
    ctx->pc = 0x29b1fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29b200: 0x244ed7e8
    ctx->pc = 0x29b200u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 4294957032));
    // 0x29b204: 0x1af1018
    ctx->pc = 0x29b204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29b208:
    // 0x29b208: 0x24420140
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 320));
    // 0x29b20c: 0x1821021
    ctx->pc = 0x29b20cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x29b210: 0xc4400010
    ctx->pc = 0x29b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b214: 0x46002834
    ctx->pc = 0x29b214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b218: 0x0
    ctx->pc = 0x29b218u;
    // NOP
    // 0x29b21c: 0x45000003
    ctx->pc = 0x29B21Cu;
    {
        const bool branch_taken_0x29b21c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B220u;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x29b21c) {
            ctx->pc = 0x29B22Cu;
            goto label_29b22c;
        }
    }
    ctx->pc = 0x29B224u;
    // 0x29b224: 0x10000006
    ctx->pc = 0x29B224u;
    {
        const bool branch_taken_0x29b224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B228u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x29b224) {
            ctx->pc = 0x29B240u;
            goto label_29b240;
        }
    }
    ctx->pc = 0x29B22Cu;
label_29b22c:
    // 0x29b22c: 0x46002034
    ctx->pc = 0x29b22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b230: 0x0
    ctx->pc = 0x29b230u;
    // NOP
    // 0x29b234: 0x45000002
    ctx->pc = 0x29B234u;
    {
        const bool branch_taken_0x29b234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B238u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x29b234) {
            ctx->pc = 0x29B240u;
            goto label_29b240;
        }
    }
    ctx->pc = 0x29B23Cu;
    // 0x29b23c: 0x24040003
    ctx->pc = 0x29b23cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_29b240:
    // 0x29b240: 0xa1080
    ctx->pc = 0x29b240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
    // 0x29b244: 0x4e1021
    ctx->pc = 0x29b244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x29b248: 0x44840800
    ctx->pc = 0x29b248u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x29b24c: 0x46800860
    ctx->pc = 0x29b24cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29b250: 0xc4400000
    ctx->pc = 0x29b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b254: 0x46000834
    ctx->pc = 0x29b254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b258: 0x0
    ctx->pc = 0x29b258u;
    // NOP
    // 0x29b25c: 0x45000050
    ctx->pc = 0x29B25Cu;
    {
        const bool branch_taken_0x29b25c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B260u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29b25c) {
            ctx->pc = 0x29B3A0u;
            goto label_29b3a0;
        }
    }
    ctx->pc = 0x29B264u;
    // 0x29b264: 0x2442d7e8
    ctx->pc = 0x29b264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957032));
    // 0x29b268: 0xa1880
    ctx->pc = 0x29b268u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 2));
    // 0x29b26c: 0x625821
    ctx->pc = 0x29b26cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b270: 0x3c013f80
    ctx->pc = 0x29b270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29b274: 0x44811800
    ctx->pc = 0x29b274u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_29b278:
    // 0x29b278: 0x382d
    ctx->pc = 0x29b278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b27c: 0x44801000
    ctx->pc = 0x29b27cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x29b280: 0x8d840b60
    ctx->pc = 0x29b280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 2912)));
    // 0x29b284: 0x1080001d
    ctx->pc = 0x29B284u;
    {
        const bool branch_taken_0x29b284 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B288u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b284) {
            ctx->pc = 0x29B2FCu;
            goto label_29b2fc;
        }
    }
    ctx->pc = 0x29B28Cu;
    // 0x29b28c: 0x84820128
    ctx->pc = 0x29b28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 296)));
label_29b290:
    // 0x29b290: 0x4430018
    ctx->pc = 0x29B290u;
    {
        const bool branch_taken_0x29b290 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29b290) {
            ctx->pc = 0x29B294u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2912)));
            ctx->pc = 0x29B2F4u;
            goto label_29b2f4;
        }
    }
    ctx->pc = 0x29B298u;
    // 0x29b298: 0x282d
    ctx->pc = 0x29b298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b29c: 0x84860136
    ctx->pc = 0x29b29cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 310)));
    // 0x29b2a0: 0x24080030
    ctx->pc = 0x29b2a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29b2a4: 0x0
    ctx->pc = 0x29b2a4u;
    // NOP
label_29b2a8:
    // 0x29b2a8: 0xa6102a
    ctx->pc = 0x29b2a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x29b2ac: 0x10400010
    ctx->pc = 0x29B2ACu;
    {
        const bool branch_taken_0x29b2ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B2B0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29b2ac) {
            ctx->pc = 0x29B2F0u;
            goto label_29b2f0;
        }
    }
    ctx->pc = 0x29B2B4u;
    // 0x29b2b4: 0x24420140
    ctx->pc = 0x29b2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 320));
    // 0x29b2b8: 0x821821
    ctx->pc = 0x29b2b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b2bc: 0x8c620000
    ctx->pc = 0x29b2bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b2c0: 0x544afff9
    ctx->pc = 0x29B2C0u;
    {
        const bool branch_taken_0x29b2c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 10));
        if (branch_taken_0x29b2c0) {
            ctx->pc = 0x29B2C4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x29B2A8u;
            goto label_29b2a8;
        }
    }
    ctx->pc = 0x29B2C8u;
    // 0x29b2c8: 0x50e00007
    ctx->pc = 0x29B2C8u;
    {
        const bool branch_taken_0x29b2c8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b2c8) {
            ctx->pc = 0x29B2CCu;
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29B2E8u;
            goto label_29b2e8;
        }
    }
    ctx->pc = 0x29B2D0u;
    // 0x29b2d0: 0xc460000c
    ctx->pc = 0x29b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b2d4: 0x46001034
    ctx->pc = 0x29b2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b2d8: 0x0
    ctx->pc = 0x29b2d8u;
    // NOP
    // 0x29b2dc: 0x4502fff2
    ctx->pc = 0x29B2DCu;
    {
        const bool branch_taken_0x29b2dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b2dc) {
            ctx->pc = 0x29B2E0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x29B2A8u;
            goto label_29b2a8;
        }
    }
    ctx->pc = 0x29B2E4u;
    // 0x29b2e4: 0x80382d
    ctx->pc = 0x29b2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b2e8:
    // 0x29b2e8: 0xc462000c
    ctx->pc = 0x29b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b2ec: 0xa0482d
    ctx->pc = 0x29b2ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29b2f0:
    // 0x29b2f0: 0x8c840b60
    ctx->pc = 0x29b2f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2912)));
label_29b2f4:
    // 0x29b2f4: 0x5480ffe6
    ctx->pc = 0x29B2F4u;
    {
        const bool branch_taken_0x29b2f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x29b2f4) {
            ctx->pc = 0x29B2F8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 296)));
            ctx->pc = 0x29B290u;
            goto label_29b290;
        }
    }
    ctx->pc = 0x29B2FCu;
label_29b2fc:
    // 0x29b2fc: 0x50e00029
    ctx->pc = 0x29B2FCu;
    {
        const bool branch_taken_0x29b2fc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b2fc) {
            ctx->pc = 0x29B300u;
            SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
            ctx->pc = 0x29B3A4u;
            goto label_29b3a4;
        }
    }
    ctx->pc = 0x29B304u;
    // 0x29b304: 0x120282d
    ctx->pc = 0x29b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b308: 0x84e20136
    ctx->pc = 0x29b308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 310)));
    // 0x29b30c: 0x2442ffff
    ctx->pc = 0x29b30cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b310: 0xa2102a
    ctx->pc = 0x29b310u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x29b314: 0x5040001a
    ctx->pc = 0x29B314u;
    {
        const bool branch_taken_0x29b314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b314) {
            ctx->pc = 0x29B318u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 310)));
            ctx->pc = 0x29B380u;
            goto label_29b380;
        }
    }
    ctx->pc = 0x29B31Cu;
    // 0x29b31c: 0x24060030
    ctx->pc = 0x29b31cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29b320: 0xa61018
    ctx->pc = 0x29b320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29b324: 0x0
    ctx->pc = 0x29b324u;
    // NOP
label_29b328:
    // 0x29b328: 0x472021
    ctx->pc = 0x29b328u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29b32c: 0x24a50001
    ctx->pc = 0x29b32cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x29b330: 0xa61018
    ctx->pc = 0x29b330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29b334: 0x471821
    ctx->pc = 0x29b334u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29b338: 0xdc620140
    ctx->pc = 0x29b338u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x29b33c: 0xfc820140
    ctx->pc = 0x29b33cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 320), GPR_U64(ctx, 2));
    // 0x29b340: 0xdc620148
    ctx->pc = 0x29b340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x29b344: 0xfc820148
    ctx->pc = 0x29b344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 2));
    // 0x29b348: 0xdc620150
    ctx->pc = 0x29b348u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x29b34c: 0xfc820150
    ctx->pc = 0x29b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 2));
    // 0x29b350: 0xdc620158
    ctx->pc = 0x29b350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x29b354: 0xfc820158
    ctx->pc = 0x29b354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 344), GPR_U64(ctx, 2));
    // 0x29b358: 0xdc620160
    ctx->pc = 0x29b358u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x29b35c: 0xfc820160
    ctx->pc = 0x29b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 2));
    // 0x29b360: 0xdc620168
    ctx->pc = 0x29b360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x29b364: 0xfc820168
    ctx->pc = 0x29b364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 360), GPR_U64(ctx, 2));
    // 0x29b368: 0x84e20136
    ctx->pc = 0x29b368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 310)));
    // 0x29b36c: 0x2442ffff
    ctx->pc = 0x29b36cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b370: 0xa2102a
    ctx->pc = 0x29b370u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x29b374: 0x1440ffec
    ctx->pc = 0x29B374u;
    {
        const bool branch_taken_0x29b374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B378u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29b374) {
            ctx->pc = 0x29B328u;
            goto label_29b328;
        }
    }
    ctx->pc = 0x29B37Cu;
    // 0x29b37c: 0x94e20136
    ctx->pc = 0x29b37cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 310)));
label_29b380:
    // 0x29b380: 0x2442ffff
    ctx->pc = 0x29b380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b384: 0xa4e20136
    ctx->pc = 0x29b384u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x29b388: 0xc5600000
    ctx->pc = 0x29b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b38c: 0x46030001
    ctx->pc = 0x29b38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29b390: 0x46000834
    ctx->pc = 0x29b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b394: 0x0
    ctx->pc = 0x29b394u;
    // NOP
    // 0x29b398: 0x4501ffb7
    ctx->pc = 0x29B398u;
    {
        const bool branch_taken_0x29b398 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B39Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        if (branch_taken_0x29b398) {
            ctx->pc = 0x29B278u;
            goto label_29b278;
        }
    }
    ctx->pc = 0x29B3A0u;
label_29b3a0:
    // 0x29b3a0: 0x25ad0001
    ctx->pc = 0x29b3a0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_29b3a4:
    // 0x29b3a4: 0x85820136
    ctx->pc = 0x29b3a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 310)));
    // 0x29b3a8: 0x1a2102a
    ctx->pc = 0x29b3a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 2)));
    // 0x29b3ac: 0x1440ff96
    ctx->pc = 0x29B3ACu;
    {
        const bool branch_taken_0x29b3ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B3B0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29b3ac) {
            ctx->pc = 0x29B208u;
            goto label_29b208;
        }
    }
    ctx->pc = 0x29B3B4u;
label_29b3b4:
    // 0x29b3b4: 0x3e00008
    ctx->pc = 0x29B3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B208u: goto label_29b208;
            case 0x29B22Cu: goto label_29b22c;
            case 0x29B240u: goto label_29b240;
            case 0x29B278u: goto label_29b278;
            case 0x29B290u: goto label_29b290;
            case 0x29B2A8u: goto label_29b2a8;
            case 0x29B2E8u: goto label_29b2e8;
            case 0x29B2F0u: goto label_29b2f0;
            case 0x29B2F4u: goto label_29b2f4;
            case 0x29B2FCu: goto label_29b2fc;
            case 0x29B328u: goto label_29b328;
            case 0x29B380u: goto label_29b380;
            case 0x29B3A0u: goto label_29b3a0;
            case 0x29B3A4u: goto label_29b3a4;
            case 0x29B3B4u: goto label_29b3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B3BCu;
}
