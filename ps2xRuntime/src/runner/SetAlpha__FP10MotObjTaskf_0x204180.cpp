#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetAlpha__FP10MotObjTaskf
// Address: 0x204180 - 0x204290
void SetAlpha__FP10MotObjTaskf_0x204180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetAlpha__FP10MotObjTaskf");


    ctx->pc = 0x204180u;

    // 0x204180: 0x27bdffc0
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x204184: 0x7fbf0030
    ctx->pc = 0x204184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x204188: 0x7fb10020
    ctx->pc = 0x204188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20418c: 0x7fb00010
    ctx->pc = 0x20418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x204190: 0xe7b40000
    ctx->pc = 0x204190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x204194: 0x46006506
    ctx->pc = 0x204194u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x204198: 0x249100f0
    ctx->pc = 0x204198u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 240));
    // 0x20419c: 0x24100001
    ctx->pc = 0x20419cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_2041a0:
    // 0x2041a0: 0x8e240134
    ctx->pc = 0x2041a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x2041a4: 0x1480002d
    ctx->pc = 0x2041A4u;
    {
        const bool branch_taken_0x2041a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2041A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x2041a4) {
            ctx->pc = 0x20425Cu;
            goto label_20425c;
        }
    }
    ctx->pc = 0x2041ACu;
    // 0x2041ac: 0x8ca300b4
    ctx->pc = 0x2041acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x2041b0: 0x30634000
    ctx->pc = 0x2041b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x2041b4: 0x1060000d
    ctx->pc = 0x2041B4u;
    {
        const bool branch_taken_0x2041b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2041b4) {
            ctx->pc = 0x2041ECu;
            goto label_2041ec;
        }
    }
    ctx->pc = 0x2041BCu;
    // 0x2041bc: 0x8ca40000
    ctx->pc = 0x2041bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2041c0: 0x2403038e
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 910));
    // 0x2041c4: 0x14830003
    ctx->pc = 0x2041C4u;
    {
        const bool branch_taken_0x2041c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2041c4) {
            ctx->pc = 0x2041D4u;
            goto label_2041d4;
        }
    }
    ctx->pc = 0x2041CCu;
    // 0x2041cc: 0x1000000a
    ctx->pc = 0x2041CCu;
    {
        const bool branch_taken_0x2041cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2041D0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2041cc) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x2041D4u;
label_2041d4:
    // 0x2041d4: 0x3c030027
    ctx->pc = 0x2041d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x2041d8: 0x42080
    ctx->pc = 0x2041d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2041dc: 0x2463cfb0
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954928));
    // 0x2041e0: 0x641821
    ctx->pc = 0x2041e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2041e4: 0x10000004
    ctx->pc = 0x2041E4u;
    {
        const bool branch_taken_0x2041e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2041E8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x2041e4) {
            ctx->pc = 0x2041F8u;
            goto label_2041f8;
        }
    }
    ctx->pc = 0x2041ECu;
label_2041ec:
    // 0x2041ec: 0x8ca50000
    ctx->pc = 0x2041ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2041f0: 0x0
    ctx->pc = 0x2041f0u;
    // NOP
    // 0x2041f4: 0x0
    ctx->pc = 0x2041f4u;
    // NOP
label_2041f8:
    // 0x2041f8: 0x51c03
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2041fc: 0x3404ffff
    ctx->pc = 0x2041fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x204200: 0x641824
    ctx->pc = 0x204200u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204204: 0x32100
    ctx->pc = 0x204204u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x204208: 0x3c030050
    ctx->pc = 0x204208u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x20420c: 0x2463ea20
    ctx->pc = 0x20420cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x204210: 0x643021
    ctx->pc = 0x204210u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204214: 0x8cc40000
    ctx->pc = 0x204214u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x204218: 0x3c038000
    ctx->pc = 0x204218u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x20421c: 0x831824
    ctx->pc = 0x20421cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204220: 0x50600012
    ctx->pc = 0x204220u;
    {
        const bool branch_taken_0x204220 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x204220) {
            ctx->pc = 0x204224u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x20426Cu;
            goto label_20426c;
        }
    }
    ctx->pc = 0x204228u;
    // 0x204228: 0x10a0000f
    ctx->pc = 0x204228u;
    {
        const bool branch_taken_0x204228 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x204228) {
            ctx->pc = 0x204268u;
            goto label_204268;
        }
    }
    ctx->pc = 0x204230u;
    // 0x204230: 0x8cc20004
    ctx->pc = 0x204230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x204234: 0x30a4ffff
    ctx->pc = 0x204234u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
    // 0x204238: 0x41840
    ctx->pc = 0x204238u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x20423c: 0x641821
    ctx->pc = 0x20423cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204240: 0x31880
    ctx->pc = 0x204240u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x204244: 0x431021
    ctx->pc = 0x204244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204248: 0x8c440000
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20424c: 0xc06a450
    ctx->pc = 0x20424Cu;
    SET_GPR_U32(ctx, 31, 0x204254u);
    ctx->pc = 0x204250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204254u; }
        else if (ctx->pc != 0x204254u) { ctx->pc = 0x204254u; }
    }
    if (ctx->pc != 0x204254u) { return; }
    ctx->pc = 0x204254u;
    // 0x204254: 0x10000004
    ctx->pc = 0x204254u;
    {
        const bool branch_taken_0x204254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x204254) {
            ctx->pc = 0x204268u;
            goto label_204268;
        }
    }
    ctx->pc = 0x20425Cu;
label_20425c:
    // 0x20425c: 0xc06a450
    ctx->pc = 0x20425Cu;
    SET_GPR_U32(ctx, 31, 0x204264u);
    ctx->pc = 0x204260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204264u; }
        else if (ctx->pc != 0x204264u) { ctx->pc = 0x204264u; }
    }
    if (ctx->pc != 0x204264u) { return; }
    ctx->pc = 0x204264u;
    // 0x204264: 0x0
    ctx->pc = 0x204264u;
    // NOP
label_204268:
    // 0x204268: 0x26100001
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20426c:
    // 0x20426c: 0x2a030012
    ctx->pc = 0x20426cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 18));
    // 0x204270: 0x1460ffcb
    ctx->pc = 0x204270u;
    {
        const bool branch_taken_0x204270 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x204274u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x204270) {
            ctx->pc = 0x2041A0u;
            goto label_2041a0;
        }
    }
    ctx->pc = 0x204278u;
    // 0x204278: 0x7bbf0030
    ctx->pc = 0x204278u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20427c: 0x7bb10020
    ctx->pc = 0x20427cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204280: 0x7bb00010
    ctx->pc = 0x204280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204284: 0xc7b40000
    ctx->pc = 0x204284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204288: 0x3e00008
    ctx->pc = 0x204288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20428Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2041A0u: goto label_2041a0;
            case 0x2041D4u: goto label_2041d4;
            case 0x2041ECu: goto label_2041ec;
            case 0x2041F8u: goto label_2041f8;
            case 0x20425Cu: goto label_20425c;
            case 0x204268u: goto label_204268;
            case 0x20426Cu: goto label_20426c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204290u;
}
