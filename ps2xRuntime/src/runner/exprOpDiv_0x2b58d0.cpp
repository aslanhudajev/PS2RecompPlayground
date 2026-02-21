#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpDiv
// Address: 0x2b58d0 - 0x2b5950
void exprOpDiv_0x2b58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b58d0u;

label_2b58d0:
    // 0x2b58d0: 0x8c820000
    ctx->pc = 0x2b58d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b58d4:
    // 0x2b58d4: 0x2443fffc
    ctx->pc = 0x2b58d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
label_2b58d8:
    // 0x2b58d8: 0x2c620010
    ctx->pc = 0x2b58d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b58dc:
    // 0x2b58dc: 0x10400016
label_2b58e0:
    if (ctx->pc == 0x2B58E0u) {
        ctx->pc = 0x2B58E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B58E4u;
        goto label_2b58e4;
    }
    ctx->pc = 0x2B58DCu;
    {
        const bool branch_taken_0x2b58dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B58E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b58dc) {
            ctx->pc = 0x2B5938u;
            goto label_2b5938;
        }
    }
    ctx->pc = 0x2B58E4u;
label_2b58e4:
    // 0x2b58e4: 0x24424af0
    ctx->pc = 0x2b58e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19184));
label_2b58e8:
    // 0x2b58e8: 0x31880
    ctx->pc = 0x2b58e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b58ec:
    // 0x2b58ec: 0x621821
    ctx->pc = 0x2b58ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b58f0:
    // 0x2b58f0: 0x8c620000
    ctx->pc = 0x2b58f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b58f4:
    // 0x2b58f4: 0x400008
label_2b58f8:
    if (ctx->pc == 0x2B58F8u) {
        ctx->pc = 0x2B58FCu;
        goto label_2b58fc;
    }
    ctx->pc = 0x2B58F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B58D0u: goto label_2b58d0;
            case 0x2B58D4u: goto label_2b58d4;
            case 0x2B58D8u: goto label_2b58d8;
            case 0x2B58DCu: goto label_2b58dc;
            case 0x2B58E0u: goto label_2b58e0;
            case 0x2B58E4u: goto label_2b58e4;
            case 0x2B58E8u: goto label_2b58e8;
            case 0x2B58ECu: goto label_2b58ec;
            case 0x2B58F0u: goto label_2b58f0;
            case 0x2B58F4u: goto label_2b58f4;
            case 0x2B58F8u: goto label_2b58f8;
            case 0x2B58FCu: goto label_2b58fc;
            case 0x2B5900u: goto label_2b5900;
            case 0x2B5904u: goto label_2b5904;
            case 0x2B5908u: goto label_2b5908;
            case 0x2B590Cu: goto label_2b590c;
            case 0x2B5910u: goto label_2b5910;
            case 0x2B5914u: goto label_2b5914;
            case 0x2B5918u: goto label_2b5918;
            case 0x2B591Cu: goto label_2b591c;
            case 0x2B5920u: goto label_2b5920;
            case 0x2B5924u: goto label_2b5924;
            case 0x2B5928u: goto label_2b5928;
            case 0x2B592Cu: goto label_2b592c;
            case 0x2B5930u: goto label_2b5930;
            case 0x2B5934u: goto label_2b5934;
            case 0x2B5938u: goto label_2b5938;
            case 0x2B593Cu: goto label_2b593c;
            case 0x2B5940u: goto label_2b5940;
            case 0x2B5944u: goto label_2b5944;
            case 0x2B5948u: goto label_2b5948;
            case 0x2B594Cu: goto label_2b594c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B58FCu;
label_2b58fc:
    // 0x2b58fc: 0xc4a00010
    ctx->pc = 0x2b58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5900:
    // 0x2b5900: 0xc4c10010
    ctx->pc = 0x2b5900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5904:
    // 0x2b5904: 0x0
    ctx->pc = 0x2b5904u;
    // NOP
label_2b5908:
    // 0x2b5908: 0x0
    ctx->pc = 0x2b5908u;
    // NOP
label_2b590c:
    // 0x2b590c: 0x46010003
    ctx->pc = 0x2b590cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_2b5910:
    // 0x2b5910: 0x1000000c
label_2b5914:
    if (ctx->pc == 0x2B5914u) {
        ctx->pc = 0x2B5914u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = 0x2B5918u;
        goto label_2b5918;
    }
    ctx->pc = 0x2B5910u;
    {
        const bool branch_taken_0x2b5910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5914u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        if (branch_taken_0x2b5910) {
            ctx->pc = 0x2B5944u;
            goto label_2b5944;
        }
    }
    ctx->pc = 0x2B5918u;
label_2b5918:
    // 0x2b5918: 0x8ca20010
    ctx->pc = 0x2b5918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b591c:
    // 0x2b591c: 0x8cc30010
    ctx->pc = 0x2b591cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2b5920:
    // 0x2b5920: 0x43001a
    ctx->pc = 0x2b5920u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2b5924:
    // 0x2b5924: 0x1012
    ctx->pc = 0x2b5924u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_2b5928:
    // 0x2b5928: 0x50600001
label_2b592c:
    if (ctx->pc == 0x2B592Cu) {
        ctx->pc = 0x2B592Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2B5930u;
        goto label_2b5930;
    }
    ctx->pc = 0x2B5928u;
    {
        const bool branch_taken_0x2b5928 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b5928) {
            ctx->pc = 0x2B592Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2B5930u;
            goto label_2b5930;
        }
    }
    ctx->pc = 0x2B5930u;
label_2b5930:
    // 0x2b5930: 0x10000004
label_2b5934:
    if (ctx->pc == 0x2B5934u) {
        ctx->pc = 0x2B5934u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5938u;
        goto label_2b5938;
    }
    ctx->pc = 0x2B5930u;
    {
        const bool branch_taken_0x2b5930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5934u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5930) {
            ctx->pc = 0x2B5944u;
            goto label_2b5944;
        }
    }
    ctx->pc = 0x2B5938u;
label_2b5938:
    // 0x2b5938: 0x3c07003b
    ctx->pc = 0x2b5938u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
label_2b593c:
    // 0x2b593c: 0x80ad496
label_2b5940:
    if (ctx->pc == 0x2B5940u) {
        ctx->pc = 0x2B5940u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19168));
        ctx->pc = 0x2B5944u;
        goto label_2b5944;
    }
    ctx->pc = 0x2B593Cu;
    ctx->pc = 0x2B5940u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19168));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5944u;
label_2b5944:
    // 0x2b5944: 0x8ca20000
    ctx->pc = 0x2b5944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b5948:
    // 0x2b5948: 0x3e00008
label_2b594c:
    if (ctx->pc == 0x2B594Cu) {
        ctx->pc = 0x2B594Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5950u;
        goto label_fallthrough_0x2b5948;
    }
    ctx->pc = 0x2B5948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B594Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B58D0u: goto label_2b58d0;
            case 0x2B58D4u: goto label_2b58d4;
            case 0x2B58D8u: goto label_2b58d8;
            case 0x2B58DCu: goto label_2b58dc;
            case 0x2B58E0u: goto label_2b58e0;
            case 0x2B58E4u: goto label_2b58e4;
            case 0x2B58E8u: goto label_2b58e8;
            case 0x2B58ECu: goto label_2b58ec;
            case 0x2B58F0u: goto label_2b58f0;
            case 0x2B58F4u: goto label_2b58f4;
            case 0x2B58F8u: goto label_2b58f8;
            case 0x2B58FCu: goto label_2b58fc;
            case 0x2B5900u: goto label_2b5900;
            case 0x2B5904u: goto label_2b5904;
            case 0x2B5908u: goto label_2b5908;
            case 0x2B590Cu: goto label_2b590c;
            case 0x2B5910u: goto label_2b5910;
            case 0x2B5914u: goto label_2b5914;
            case 0x2B5918u: goto label_2b5918;
            case 0x2B591Cu: goto label_2b591c;
            case 0x2B5920u: goto label_2b5920;
            case 0x2B5924u: goto label_2b5924;
            case 0x2B5928u: goto label_2b5928;
            case 0x2B592Cu: goto label_2b592c;
            case 0x2B5930u: goto label_2b5930;
            case 0x2B5934u: goto label_2b5934;
            case 0x2B5938u: goto label_2b5938;
            case 0x2B593Cu: goto label_2b593c;
            case 0x2B5940u: goto label_2b5940;
            case 0x2B5944u: goto label_2b5944;
            case 0x2B5948u: goto label_2b5948;
            case 0x2B594Cu: goto label_2b594c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b5948:
    ctx->pc = 0x2B5950u;
}
