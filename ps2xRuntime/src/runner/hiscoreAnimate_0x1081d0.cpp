#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hiscoreAnimate
// Address: 0x1081d0 - 0x1082e4
void hiscoreAnimate_0x1081d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1081d0u;

    // 0x1081d0: 0x27bdff80
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1081d4: 0xffb10010
    ctx->pc = 0x1081d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1081d8: 0x8f9182e0
    ctx->pc = 0x1081d8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x1081dc: 0xffb50050
    ctx->pc = 0x1081dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1081e0: 0xffb40040
    ctx->pc = 0x1081e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1081e4: 0x24150001
    ctx->pc = 0x1081e4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081e8: 0xffb30030
    ctx->pc = 0x1081e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1081ec: 0x24140100
    ctx->pc = 0x1081ecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1081f0: 0xffbf0060
    ctx->pc = 0x1081f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1081f4: 0x34138000
    ctx->pc = 0x1081f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x1081f8: 0xffb20020
    ctx->pc = 0x1081f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1081fc: 0x3222003f
    ctx->pc = 0x1081fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 63));
    // 0x108200: 0xffb00000
    ctx->pc = 0x108200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108204: 0x10400004
    ctx->pc = 0x108204u;
    {
        const bool branch_taken_0x108204 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108208u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        if (branch_taken_0x108204) {
            ctx->pc = 0x108218u;
            goto label_108218;
        }
    }
    ctx->pc = 0x10820Cu;
    // 0x10820c: 0x3c040017
    ctx->pc = 0x10820cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108210: 0xc04ace4
    ctx->pc = 0x108210u;
    SET_GPR_U32(ctx, 31, 0x108218u);
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12152));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108218u; }
    }
    if (ctx->pc != 0x108218u) { return; }
    ctx->pc = 0x108218u;
label_108218:
    // 0x108218: 0x3c020014
    ctx->pc = 0x108218u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x10821c: 0x8f9282e4
    ctx->pc = 0x10821cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x108220: 0x24501698
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108224: 0x24032800
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10240));
    // 0x108228: 0x24020140
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x10822c: 0x3c013f80
    ctx->pc = 0x10822cu;
    SET_GPR_S32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x108230: 0x4481a000
    ctx->pc = 0x108230u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x108234: 0xae020048
    ctx->pc = 0x108234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x108238: 0x24022000
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10823c: 0xae030058
    ctx->pc = 0x10823cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x108240: 0xae02005c
    ctx->pc = 0x108240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x108244: 0x2403007f
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x108248: 0xae110044
    ctx->pc = 0x108248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x10824c: 0x3242003f
    ctx->pc = 0x10824cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 63));
    // 0x108250: 0xa203006c
    ctx->pc = 0x108250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x108254: 0xae14004c
    ctx->pc = 0x108254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 20));
    // 0x108258: 0xae130050
    ctx->pc = 0x108258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
    // 0x10825c: 0xae130054
    ctx->pc = 0x10825cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
    // 0x108260: 0xae150060
    ctx->pc = 0x108260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 21));
    // 0x108264: 0xe6140064
    ctx->pc = 0x108264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x108268: 0x10400004
    ctx->pc = 0x108268u;
    {
        const bool branch_taken_0x108268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10826Cu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        if (branch_taken_0x108268) {
            ctx->pc = 0x10827Cu;
            goto label_10827c;
        }
    }
    ctx->pc = 0x108270u;
    // 0x108270: 0x3c040017
    ctx->pc = 0x108270u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108274: 0xc04ace4
    ctx->pc = 0x108274u;
    SET_GPR_U32(ctx, 31, 0x10827Cu);
    ctx->pc = 0x108278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12152));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10827Cu; }
    }
    if (ctx->pc != 0x10827Cu) { return; }
    ctx->pc = 0x10827Cu;
label_10827c:
    // 0x10827c: 0x24020040
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x108280: 0x24031000
    ctx->pc = 0x108280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x108284: 0xae020090
    ctx->pc = 0x108284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x108288: 0x34028c20
    ctx->pc = 0x108288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)35872);
    // 0x10828c: 0xe61400ac
    ctx->pc = 0x10828cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x108290: 0xae020098
    ctx->pc = 0x108290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x108294: 0x24020400
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x108298: 0xae120088
    ctx->pc = 0x108298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x10829c: 0xae0200a0
    ctx->pc = 0x10829cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x1082a0: 0x2402000f
    ctx->pc = 0x1082a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1082a4: 0xae14008c
    ctx->pc = 0x1082a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 20));
    // 0x1082a8: 0xae130094
    ctx->pc = 0x1082a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 19));
    // 0x1082ac: 0xae1500a4
    ctx->pc = 0x1082acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 21));
    // 0x1082b0: 0xe61400a8
    ctx->pc = 0x1082b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x1082b4: 0xae03009c
    ctx->pc = 0x1082b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x1082b8: 0xa20200b0
    ctx->pc = 0x1082b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 2));
    // 0x1082bc: 0xdfbf0060
    ctx->pc = 0x1082bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1082c0: 0xdfb50050
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1082c4: 0xdfb40040
    ctx->pc = 0x1082c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1082c8: 0xdfb30030
    ctx->pc = 0x1082c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1082cc: 0xdfb20020
    ctx->pc = 0x1082ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1082d0: 0xdfb10010
    ctx->pc = 0x1082d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1082d4: 0xdfb00000
    ctx->pc = 0x1082d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1082d8: 0xc7b40070
    ctx->pc = 0x1082d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1082dc: 0x3e00008
    ctx->pc = 0x1082DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1082E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108218u: goto label_108218;
            case 0x10827Cu: goto label_10827c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1082E4u;
}
