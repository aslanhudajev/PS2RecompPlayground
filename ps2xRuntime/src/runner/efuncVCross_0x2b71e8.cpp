#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncVCross
// Address: 0x2b71e8 - 0x2b7334
void efuncVCross_0x2b71e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b71e8u;

    // 0x2b71e8: 0x27bdffe0
    ctx->pc = 0x2b71e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b71ec: 0x8c870010
    ctx->pc = 0x2b71ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b71f0: 0x8ce30000
    ctx->pc = 0x2b71f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b71f4: 0x24020002
    ctx->pc = 0x2b71f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b71f8: 0x10620003
    ctx->pc = 0x2B71F8u;
    {
        const bool branch_taken_0x2b71f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B71FCu;
        SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b71f8) {
            ctx->pc = 0x2B7208u;
            goto label_2b7208;
        }
    }
    ctx->pc = 0x2B7200u;
    // 0x2b7200: 0x10000049
    ctx->pc = 0x2B7200u;
    {
        const bool branch_taken_0x2b7200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7204u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b7200) {
            ctx->pc = 0x2B7328u;
            goto label_2b7328;
        }
    }
    ctx->pc = 0x2B7208u;
label_2b7208:
    // 0x2b7208: 0x8c820004
    ctx->pc = 0x2b7208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b720c: 0x80460006
    ctx->pc = 0x2b720cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b7210: 0x24c6ffd0
    ctx->pc = 0x2b7210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2b7214: 0x24c2fffe
    ctx->pc = 0x2b7214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2b7218: 0x2c420002
    ctx->pc = 0x2b7218u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2b721c: 0x24030003
    ctx->pc = 0x2b721cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7220: 0x62300a
    ctx->pc = 0x2b7220u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x2b7224: 0x18c00012
    ctx->pc = 0x2B7224u;
    {
        const bool branch_taken_0x2b7224 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B7228u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b7224) {
            ctx->pc = 0x2B7270u;
            goto label_2b7270;
        }
    }
    ctx->pc = 0x2B722Cu;
    // 0x2b722c: 0x24ea0010
    ctx->pc = 0x2b722cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b7230: 0x27a90010
    ctx->pc = 0x2b7230u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b7234: 0x24e80060
    ctx->pc = 0x2b7234u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 96));
    // 0x2b7238: 0x51880
    ctx->pc = 0x2b7238u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b723c: 0x0
    ctx->pc = 0x2b723cu;
    // NOP
label_2b7240:
    // 0x2b7240: 0x3a32021
    ctx->pc = 0x2b7240u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2b7244: 0x1431021
    ctx->pc = 0x2b7244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2b7248: 0xc4400000
    ctx->pc = 0x2b7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b724c: 0xe4800000
    ctx->pc = 0x2b724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b7250: 0x1231021
    ctx->pc = 0x2b7250u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2b7254: 0x1031821
    ctx->pc = 0x2b7254u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b7258: 0xc4600000
    ctx->pc = 0x2b7258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b725c: 0xe4400000
    ctx->pc = 0x2b725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b7260: 0x24a50001
    ctx->pc = 0x2b7260u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b7264: 0xa6102a
    ctx->pc = 0x2b7264u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2b7268: 0x1440fff5
    ctx->pc = 0x2B7268u;
    {
        const bool branch_taken_0x2b7268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B726Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x2b7268) {
            ctx->pc = 0x2B7240u;
            goto label_2b7240;
        }
    }
    ctx->pc = 0x2B7270u;
label_2b7270:
    // 0x2b7270: 0x28a20004
    ctx->pc = 0x2b7270u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x2b7274: 0x10400013
    ctx->pc = 0x2B7274u;
    {
        const bool branch_taken_0x2b7274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7278u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x2b7274) {
            ctx->pc = 0x2B72C4u;
            goto label_2b72c4;
        }
    }
    ctx->pc = 0x2B727Cu;
    // 0x2b727c: 0x24e90010
    ctx->pc = 0x2b727cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b7280: 0x27a80010
    ctx->pc = 0x2b7280u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b7284: 0x24e60060
    ctx->pc = 0x2b7284u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 96));
    // 0x2b7288: 0x51880
    ctx->pc = 0x2b7288u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b728c: 0x0
    ctx->pc = 0x2b728cu;
    // NOP
label_2b7290:
    // 0x2b7290: 0x3a32021
    ctx->pc = 0x2b7290u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2b7294: 0x1231021
    ctx->pc = 0x2b7294u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2b7298: 0xc4400000
    ctx->pc = 0x2b7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b729c: 0xe4800000
    ctx->pc = 0x2b729cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b72a0: 0x1031021
    ctx->pc = 0x2b72a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b72a4: 0xc31821
    ctx->pc = 0x2b72a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b72a8: 0xc4600000
    ctx->pc = 0x2b72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b72ac: 0xe4400000
    ctx->pc = 0x2b72acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b72b0: 0x24a50001
    ctx->pc = 0x2b72b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b72b4: 0x28a20004
    ctx->pc = 0x2b72b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x2b72b8: 0x1440fff5
    ctx->pc = 0x2B72B8u;
    {
        const bool branch_taken_0x2b72b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B72BCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x2b72b8) {
            ctx->pc = 0x2B7290u;
            goto label_2b7290;
        }
    }
    ctx->pc = 0x2B72C0u;
    // 0x2b72c0: 0xc7a20004
    ctx->pc = 0x2b72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b72c4:
    // 0x2b72c4: 0xc7a00018
    ctx->pc = 0x2b72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b72c8: 0x46001082
    ctx->pc = 0x2b72c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b72cc: 0xc7a00008
    ctx->pc = 0x2b72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b72d0: 0xc7a10014
    ctx->pc = 0x2b72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b72d4: 0x46010002
    ctx->pc = 0x2b72d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b72d8: 0x46001081
    ctx->pc = 0x2b72d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b72dc: 0xe5620010
    ctx->pc = 0x2b72dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x2b72e0: 0xc7a20008
    ctx->pc = 0x2b72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b72e4: 0xc7a00010
    ctx->pc = 0x2b72e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b72e8: 0x46001082
    ctx->pc = 0x2b72e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b72ec: 0xc7a00000
    ctx->pc = 0x2b72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b72f0: 0xc7a10018
    ctx->pc = 0x2b72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b72f4: 0x46010002
    ctx->pc = 0x2b72f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b72f8: 0x46001081
    ctx->pc = 0x2b72f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b72fc: 0xe5620014
    ctx->pc = 0x2b72fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
    // 0x2b7300: 0xc7a20000
    ctx->pc = 0x2b7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7304: 0xc7a00014
    ctx->pc = 0x2b7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7308: 0x46001082
    ctx->pc = 0x2b7308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b730c: 0xc7a00004
    ctx->pc = 0x2b730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7310: 0xc7a10010
    ctx->pc = 0x2b7310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7314: 0x46010002
    ctx->pc = 0x2b7314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b7318: 0x46001081
    ctx->pc = 0x2b7318u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b731c: 0xe5620018
    ctx->pc = 0x2b731cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
    // 0x2b7320: 0xad60001c
    ctx->pc = 0x2b7320u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x2b7324: 0x24020002
    ctx->pc = 0x2b7324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2b7328:
    // 0x2b7328: 0xad620000
    ctx->pc = 0x2b7328u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x2b732c: 0x3e00008
    ctx->pc = 0x2B732Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7208u: goto label_2b7208;
            case 0x2B7240u: goto label_2b7240;
            case 0x2B7270u: goto label_2b7270;
            case 0x2B7290u: goto label_2b7290;
            case 0x2B72C4u: goto label_2b72c4;
            case 0x2B7328u: goto label_2b7328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B7334u;
}
