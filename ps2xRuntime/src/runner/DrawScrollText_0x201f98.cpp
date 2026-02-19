#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawScrollText
// Address: 0x201f98 - 0x2020c4
void DrawScrollText_0x201f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201f98u;

    // 0x201f98: 0x27bdff60
    ctx->pc = 0x201f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x201f9c: 0xffbf0090
    ctx->pc = 0x201f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x201fa0: 0xffb70080
    ctx->pc = 0x201fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x201fa4: 0xffb60070
    ctx->pc = 0x201fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x201fa8: 0xffb50060
    ctx->pc = 0x201fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x201fac: 0xffb40050
    ctx->pc = 0x201facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x201fb0: 0xffb30040
    ctx->pc = 0x201fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x201fb4: 0xffb20030
    ctx->pc = 0x201fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x201fb8: 0xffb10020
    ctx->pc = 0x201fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x201fbc: 0xffb00010
    ctx->pc = 0x201fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x201fc0: 0xa0a02d
    ctx->pc = 0x201fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc4: 0xc0a82d
    ctx->pc = 0x201fc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc8: 0xe0b02d
    ctx->pc = 0x201fc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fcc: 0x100882d
    ctx->pc = 0x201fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fd0: 0x120b82d
    ctx->pc = 0x201fd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fd4: 0x140802d
    ctx->pc = 0x201fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fd8: 0x160902d
    ctx->pc = 0x201fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fdc: 0x3c020031
    ctx->pc = 0x201fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201fe0: 0x4800006
    ctx->pc = 0x201FE0u;
    {
        const bool branch_taken_0x201fe0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x201FE4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x201fe0) {
            ctx->pc = 0x201FFCu;
            goto label_201ffc;
        }
    }
    ctx->pc = 0x201FE8u;
    // 0x201fe8: 0x24030044
    ctx->pc = 0x201fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x201fec: 0x831818
    ctx->pc = 0x201fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201ff0: 0x3c020031
    ctx->pc = 0x201ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201ff4: 0x2442f6f0
    ctx->pc = 0x201ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x201ff8: 0x629821
    ctx->pc = 0x201ff8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201ffc:
    // 0x201ffc: 0x6010007
    ctx->pc = 0x201FFCu;
    {
        const bool branch_taken_0x201ffc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x202000u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201ffc) {
            ctx->pc = 0x20201Cu;
            goto label_20201c;
        }
    }
    ctx->pc = 0x202004u;
    // 0x202004: 0x3c020031
    ctx->pc = 0x202004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202008: 0x8c50f278
    ctx->pc = 0x202008u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294963832)));
    // 0x20200c: 0x6010003
    ctx->pc = 0x20200Cu;
    {
        const bool branch_taken_0x20200c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x202010u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20200c) {
            ctx->pc = 0x20201Cu;
            goto label_20201c;
        }
    }
    ctx->pc = 0x202014u;
    // 0x202014: 0x10000020
    ctx->pc = 0x202014u;
    {
        const bool branch_taken_0x202014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202018u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202014) {
            ctx->pc = 0x202098u;
            goto label_202098;
        }
    }
    ctx->pc = 0x20201Cu;
label_20201c:
    // 0x20201c: 0x240302d
    ctx->pc = 0x20201cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202020: 0xc08066c
    ctx->pc = 0x202020u;
    SET_GPR_U32(ctx, 31, 0x202028u);
    ctx->pc = 0x202024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollText_0x2019b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202028u; }
    }
    if (ctx->pc != 0x202028u) { return; }
    ctx->pc = 0x202028u;
    // 0x202028: 0x40282d
    ctx->pc = 0x202028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20202c: 0x14a00007
    ctx->pc = 0x20202Cu;
    {
        const bool branch_taken_0x20202c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x202030u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x20202c) {
            ctx->pc = 0x20204Cu;
            goto label_20204c;
        }
    }
    ctx->pc = 0x202034u;
    // 0x202034: 0x24844808
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18440));
    // 0x202038: 0x200282d
    ctx->pc = 0x202038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20203c: 0xc0b492e
    ctx->pc = 0x20203Cu;
    SET_GPR_U32(ctx, 31, 0x202044u);
    ctx->pc = 0x202040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202044u; }
    }
    if (ctx->pc != 0x202044u) { return; }
    ctx->pc = 0x202044u;
    // 0x202044: 0x10000014
    ctx->pc = 0x202044u;
    {
        const bool branch_taken_0x202044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202048u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202044) {
            ctx->pc = 0x202098u;
            goto label_202098;
        }
    }
    ctx->pc = 0x20204Cu;
label_20204c:
    // 0x20204c: 0x6200006
    ctx->pc = 0x20204Cu;
    {
        const bool branch_taken_0x20204c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x202050u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 10));
        if (branch_taken_0x20204c) {
            ctx->pc = 0x202068u;
            goto label_202068;
        }
    }
    ctx->pc = 0x202054u;
    // 0x202054: 0x10400005
    ctx->pc = 0x202054u;
    {
        const bool branch_taken_0x202054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202058u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x202054) {
            ctx->pc = 0x20206Cu;
            goto label_20206c;
        }
    }
    ctx->pc = 0x20205Cu;
    // 0x20205c: 0x2842000a
    ctx->pc = 0x20205cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x202060: 0x54400003
    ctx->pc = 0x202060u;
    {
        const bool branch_taken_0x202060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x202060) {
            ctx->pc = 0x202064u;
            SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
            ctx->pc = 0x202070u;
            goto label_202070;
        }
    }
    ctx->pc = 0x202068u;
label_202068:
    // 0x202068: 0x8fb10000
    ctx->pc = 0x202068u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20206c:
    // 0x20206c: 0x3c040031
    ctx->pc = 0x20206cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_202070:
    // 0x202070: 0xc0bf2c1
    ctx->pc = 0x202070u;
    SET_GPR_U32(ctx, 31, 0x202078u);
    ctx->pc = 0x202074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963880));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202078u; }
    }
    if (ctx->pc != 0x202078u) { return; }
    ctx->pc = 0x202078u;
    // 0x202078: 0x260202d
    ctx->pc = 0x202078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20207c: 0x200282d
    ctx->pc = 0x20207cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202080: 0x280302d
    ctx->pc = 0x202080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202084: 0x2a0382d
    ctx->pc = 0x202084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202088: 0x2c0402d
    ctx->pc = 0x202088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20208c: 0x220482d
    ctx->pc = 0x20208cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202090: 0xc08075c
    ctx->pc = 0x202090u;
    SET_GPR_U32(ctx, 31, 0x202098u);
    ctx->pc = 0x202094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringTextSub_0x201d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202098u; }
    }
    if (ctx->pc != 0x202098u) { return; }
    ctx->pc = 0x202098u;
label_202098:
    // 0x202098: 0xdfbf0090
    ctx->pc = 0x202098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20209c: 0xdfb70080
    ctx->pc = 0x20209cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2020a0: 0xdfb60070
    ctx->pc = 0x2020a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2020a4: 0xdfb50060
    ctx->pc = 0x2020a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2020a8: 0xdfb40050
    ctx->pc = 0x2020a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2020ac: 0xdfb30040
    ctx->pc = 0x2020acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2020b0: 0xdfb20030
    ctx->pc = 0x2020b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2020b4: 0xdfb10020
    ctx->pc = 0x2020b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2020b8: 0xdfb00010
    ctx->pc = 0x2020b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2020bc: 0x3e00008
    ctx->pc = 0x2020BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201FFCu: goto label_201ffc;
            case 0x20201Cu: goto label_20201c;
            case 0x20204Cu: goto label_20204c;
            case 0x202068u: goto label_202068;
            case 0x20206Cu: goto label_20206c;
            case 0x202070u: goto label_202070;
            case 0x202098u: goto label_202098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2020C4u;
}
