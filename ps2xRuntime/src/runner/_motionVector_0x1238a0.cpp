#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionVector
// Address: 0x1238a0 - 0x1239dc
void _motionVector_0x1238a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1238a0u;

    // 0x1238a0: 0x27bdff70
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1238a4: 0xffb20020
    ctx->pc = 0x1238a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1238a8: 0xffb70070
    ctx->pc = 0x1238a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1238ac: 0x80902d
    ctx->pc = 0x1238acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238b0: 0xffb60060
    ctx->pc = 0x1238b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1238b4: 0xa0b82d
    ctx->pc = 0x1238b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238b8: 0xffb50050
    ctx->pc = 0x1238b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1238bc: 0x100b02d
    ctx->pc = 0x1238bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238c0: 0xffb40040
    ctx->pc = 0x1238c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1238c4: 0x120a82d
    ctx->pc = 0x1238c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238c8: 0xffb30030
    ctx->pc = 0x1238c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1238cc: 0x140a02d
    ctx->pc = 0x1238ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238d0: 0xffb00000
    ctx->pc = 0x1238d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1238d4: 0xe0982d
    ctx->pc = 0x1238d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238d8: 0xffb10010
    ctx->pc = 0x1238d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1238dc: 0xc0802d
    ctx->pc = 0x1238dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238e0: 0xffbf0080
    ctx->pc = 0x1238e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1238e4: 0xc048eda
    ctx->pc = 0x1238E4u;
    SET_GPR_U32(ctx, 31, 0x1238ECu);
    ctx->pc = 0x1238E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x123B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x123b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1238ECu; }
    }
    if (ctx->pc != 0x1238ECu) { return; }
    ctx->pc = 0x1238ECu;
    // 0x1238ec: 0x12000007
    ctx->pc = 0x1238ECu;
    {
        const bool branch_taken_0x1238ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1238F0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1238ec) {
            ctx->pc = 0x12390Cu;
            goto label_12390c;
        }
    }
    ctx->pc = 0x1238F4u;
    // 0x1238f4: 0x12200006
    ctx->pc = 0x1238F4u;
    {
        const bool branch_taken_0x1238f4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1238F8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1238f4) {
            ctx->pc = 0x123910u;
            goto label_123910;
        }
    }
    ctx->pc = 0x1238FCu;
    // 0x1238fc: 0xc048fdc
    ctx->pc = 0x1238FCu;
    SET_GPR_U32(ctx, 31, 0x123904u);
    ctx->pc = 0x123900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123904u; }
    }
    if (ctx->pc != 0x123904u) { return; }
    ctx->pc = 0x123904u;
    // 0x123904: 0x10000002
    ctx->pc = 0x123904u;
    {
        const bool branch_taken_0x123904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123908u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123904) {
            ctx->pc = 0x123910u;
            goto label_123910;
        }
    }
    ctx->pc = 0x12390Cu;
label_12390c:
    // 0x12390c: 0x382d
    ctx->pc = 0x12390cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123910:
    // 0x123910: 0x200282d
    ctx->pc = 0x123910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123914: 0x220302d
    ctx->pc = 0x123914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123918: 0x240202d
    ctx->pc = 0x123918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12391c: 0xc048da6
    ctx->pc = 0x12391Cu;
    SET_GPR_U32(ctx, 31, 0x123924u);
    ctx->pc = 0x123920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123698u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x123698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123924u; }
    }
    if (ctx->pc != 0x123924u) { return; }
    ctx->pc = 0x123924u;
    // 0x123924: 0x12c00004
    ctx->pc = 0x123924u;
    {
        const bool branch_taken_0x123924 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x123924) {
            ctx->pc = 0x123938u;
            goto label_123938;
        }
    }
    ctx->pc = 0x12392Cu;
    // 0x12392c: 0xc048a66
    ctx->pc = 0x12392Cu;
    SET_GPR_U32(ctx, 31, 0x123934u);
    ctx->pc = 0x122998u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x122998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123934u; }
    }
    if (ctx->pc != 0x123934u) { return; }
    ctx->pc = 0x123934u;
    // 0x123934: 0xaee20000
    ctx->pc = 0x123934u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_123938:
    // 0x123938: 0xc048eda
    ctx->pc = 0x123938u;
    SET_GPR_U32(ctx, 31, 0x123940u);
    ctx->pc = 0x12393Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x123B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x123b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123940u; }
    }
    if (ctx->pc != 0x123940u) { return; }
    ctx->pc = 0x123940u;
    // 0x123940: 0x12600007
    ctx->pc = 0x123940u;
    {
        const bool branch_taken_0x123940 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x123944u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123940) {
            ctx->pc = 0x123960u;
            goto label_123960;
        }
    }
    ctx->pc = 0x123948u;
    // 0x123948: 0x12200006
    ctx->pc = 0x123948u;
    {
        const bool branch_taken_0x123948 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x12394Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123948) {
            ctx->pc = 0x123964u;
            goto label_123964;
        }
    }
    ctx->pc = 0x123950u;
    // 0x123950: 0xc048fdc
    ctx->pc = 0x123950u;
    SET_GPR_U32(ctx, 31, 0x123958u);
    ctx->pc = 0x123954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123958u; }
    }
    if (ctx->pc != 0x123958u) { return; }
    ctx->pc = 0x123958u;
    // 0x123958: 0x10000002
    ctx->pc = 0x123958u;
    {
        const bool branch_taken_0x123958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12395Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123958) {
            ctx->pc = 0x123964u;
            goto label_123964;
        }
    }
    ctx->pc = 0x123960u;
label_123960:
    // 0x123960: 0x382d
    ctx->pc = 0x123960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123964:
    // 0x123964: 0x12a00004
    ctx->pc = 0x123964u;
    {
        const bool branch_taken_0x123964 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x123968u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123964) {
            ctx->pc = 0x123978u;
            goto label_123978;
        }
    }
    ctx->pc = 0x12396Cu;
    // 0x12396c: 0x8e420004
    ctx->pc = 0x12396cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x123970: 0x21043
    ctx->pc = 0x123970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x123974: 0xae420004
    ctx->pc = 0x123974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_123978:
    // 0x123978: 0x220302d
    ctx->pc = 0x123978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12397c: 0x280402d
    ctx->pc = 0x12397cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123980: 0xc048da6
    ctx->pc = 0x123980u;
    SET_GPR_U32(ctx, 31, 0x123988u);
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x123698u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x123698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123988u; }
    }
    if (ctx->pc != 0x123988u) { return; }
    ctx->pc = 0x123988u;
    // 0x123988: 0x12a00004
    ctx->pc = 0x123988u;
    {
        const bool branch_taken_0x123988 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x123988) {
            ctx->pc = 0x12399Cu;
            goto label_12399c;
        }
    }
    ctx->pc = 0x123990u;
    // 0x123990: 0x8e420004
    ctx->pc = 0x123990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x123994: 0x21040
    ctx->pc = 0x123994u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x123998: 0xae420004
    ctx->pc = 0x123998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_12399c:
    // 0x12399c: 0x12c00005
    ctx->pc = 0x12399Cu;
    {
        const bool branch_taken_0x12399c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1239A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x12399c) {
            ctx->pc = 0x1239B4u;
            goto label_1239b4;
        }
    }
    ctx->pc = 0x1239A4u;
    // 0x1239a4: 0xc048a66
    ctx->pc = 0x1239A4u;
    SET_GPR_U32(ctx, 31, 0x1239ACu);
    ctx->pc = 0x122998u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x122998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1239ACu; }
    }
    if (ctx->pc != 0x1239ACu) { return; }
    ctx->pc = 0x1239ACu;
    // 0x1239ac: 0xaee20004
    ctx->pc = 0x1239acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x1239b0: 0xdfbf0080
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1239b4:
    // 0x1239b4: 0xdfb70070
    ctx->pc = 0x1239b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1239b8: 0xdfb60060
    ctx->pc = 0x1239b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1239bc: 0xdfb50050
    ctx->pc = 0x1239bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1239c0: 0xdfb40040
    ctx->pc = 0x1239c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1239c4: 0xdfb30030
    ctx->pc = 0x1239c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1239c8: 0xdfb20020
    ctx->pc = 0x1239c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1239cc: 0xdfb10010
    ctx->pc = 0x1239ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1239d0: 0xdfb00000
    ctx->pc = 0x1239d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1239d4: 0x3e00008
    ctx->pc = 0x1239D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1239D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12390Cu: goto label_12390c;
            case 0x123910u: goto label_123910;
            case 0x123938u: goto label_123938;
            case 0x123960u: goto label_123960;
            case 0x123964u: goto label_123964;
            case 0x123978u: goto label_123978;
            case 0x12399Cu: goto label_12399c;
            case 0x1239B4u: goto label_1239b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1239DCu;
}
