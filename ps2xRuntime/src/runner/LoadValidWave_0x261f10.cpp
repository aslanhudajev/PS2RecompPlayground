#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadValidWave
// Address: 0x261f10 - 0x2620ac
void LoadValidWave_0x261f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261f10u;

    // 0x261f10: 0x27bdff80
    ctx->pc = 0x261f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x261f14: 0xffbf0070
    ctx->pc = 0x261f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x261f18: 0xffb60060
    ctx->pc = 0x261f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x261f1c: 0xffb50050
    ctx->pc = 0x261f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x261f20: 0xffb40040
    ctx->pc = 0x261f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x261f24: 0xffb30030
    ctx->pc = 0x261f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x261f28: 0xffb20020
    ctx->pc = 0x261f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x261f2c: 0xffb10010
    ctx->pc = 0x261f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x261f30: 0xffb00000
    ctx->pc = 0x261f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x261f34: 0xa0982d
    ctx->pc = 0x261f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261f38: 0x3c120034
    ctx->pc = 0x261f38u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x261f3c: 0x2415002c
    ctx->pc = 0x261f3cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 44));
    // 0x261f40: 0x3c020034
    ctx->pc = 0x261f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261f44: 0x2454e530
    ctx->pc = 0x261f44u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x261f48: 0x2416000e
    ctx->pc = 0x261f48u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 14));
    // 0x261f4c: 0x0
    ctx->pc = 0x261f4cu;
    // NOP
label_261f50:
    // 0x261f50: 0x48203
    ctx->pc = 0x261f50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 8));
    // 0x261f54: 0x3c020034
    ctx->pc = 0x261f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261f58: 0x8c42e7c4
    ctx->pc = 0x261f58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961092)));
    // 0x261f5c: 0x10500030
    ctx->pc = 0x261F5Cu;
    {
        const bool branch_taken_0x261f5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x261F60u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x261f5c) {
            ctx->pc = 0x262020u;
            goto label_262020;
        }
    }
    ctx->pc = 0x261F64u;
    // 0x261f64: 0x202d
    ctx->pc = 0x261f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261f68: 0x8e42e520
    ctx->pc = 0x261f68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294960416)));
    // 0x261f6c: 0x14500004
    ctx->pc = 0x261F6Cu;
    {
        const bool branch_taken_0x261f6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x261F70u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294960416));
        if (branch_taken_0x261f6c) {
            ctx->pc = 0x261F80u;
            goto label_261f80;
        }
    }
    ctx->pc = 0x261F74u;
    // 0x261f74: 0x8c620010
    ctx->pc = 0x261f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x261f78: 0x1440000e
    ctx->pc = 0x261F78u;
    {
        const bool branch_taken_0x261f78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x261f78) {
            ctx->pc = 0x261FB4u;
            goto label_261fb4;
        }
    }
    ctx->pc = 0x261F80u;
label_261f80:
    // 0x261f80: 0x24840001
    ctx->pc = 0x261f80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_261f84:
    // 0x261f84: 0x2c82000e
    ctx->pc = 0x261f84u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 14));
    // 0x261f88: 0x1040000a
    ctx->pc = 0x261F88u;
    {
        const bool branch_taken_0x261f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261F8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294960416));
        if (branch_taken_0x261f88) {
            ctx->pc = 0x261FB4u;
            goto label_261fb4;
        }
    }
    ctx->pc = 0x261F90u;
    // 0x261f90: 0x951818
    ctx->pc = 0x261f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261f94: 0x621021
    ctx->pc = 0x261f94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261f98: 0x8c420000
    ctx->pc = 0x261f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261f9c: 0x5450fff9
    ctx->pc = 0x261F9Cu;
    {
        const bool branch_taken_0x261f9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x261f9c) {
            ctx->pc = 0x261FA0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x261F84u;
            goto label_261f84;
        }
    }
    ctx->pc = 0x261FA4u;
    // 0x261fa4: 0x741021
    ctx->pc = 0x261fa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x261fa8: 0x8c420000
    ctx->pc = 0x261fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261fac: 0x5040fff5
    ctx->pc = 0x261FACu;
    {
        const bool branch_taken_0x261fac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x261fac) {
            ctx->pc = 0x261FB0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x261F84u;
            goto label_261f84;
        }
    }
    ctx->pc = 0x261FB4u;
label_261fb4:
    // 0x261fb4: 0x14960022
    ctx->pc = 0x261FB4u;
    {
        const bool branch_taken_0x261fb4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 22));
        ctx->pc = 0x261FB8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x261fb4) {
            ctx->pc = 0x262040u;
            goto label_262040;
        }
    }
    ctx->pc = 0x261FBCu;
    // 0x261fbc: 0x3c030034
    ctx->pc = 0x261fbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261fc0: 0x2462e520
    ctx->pc = 0x261fc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x261fc4: 0x8c420010
    ctx->pc = 0x261fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x261fc8: 0x10400003
    ctx->pc = 0x261FC8u;
    {
        const bool branch_taken_0x261fc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261FCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x261fc8) {
            ctx->pc = 0x261FD8u;
            goto label_261fd8;
        }
    }
    ctx->pc = 0x261FD0u;
    // 0x261fd0: 0x1000000b
    ctx->pc = 0x261FD0u;
    {
        const bool branch_taken_0x261fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261FD4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 4294960416)));
        if (branch_taken_0x261fd0) {
            ctx->pc = 0x262000u;
            goto label_262000;
        }
    }
    ctx->pc = 0x261FD8u;
label_261fd8:
    // 0x261fd8: 0x24840001
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x261fdc: 0x2c82000e
    ctx->pc = 0x261fdcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 14));
    // 0x261fe0: 0x10400007
    ctx->pc = 0x261FE0u;
    {
        const bool branch_taken_0x261fe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261FE4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x261fe0) {
            ctx->pc = 0x262000u;
            goto label_262000;
        }
    }
    ctx->pc = 0x261FE8u;
    // 0x261fe8: 0x741021
    ctx->pc = 0x261fe8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x261fec: 0x8c420000
    ctx->pc = 0x261fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261ff0: 0x1040fff9
    ctx->pc = 0x261FF0u;
    {
        const bool branch_taken_0x261ff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261FF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4294960416));
        if (branch_taken_0x261ff0) {
            ctx->pc = 0x261FD8u;
            goto label_261fd8;
        }
    }
    ctx->pc = 0x261FF8u;
    // 0x261ff8: 0x651021
    ctx->pc = 0x261ff8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261ffc: 0x8c500000
    ctx->pc = 0x261ffcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262000:
    // 0x262000: 0x1496000f
    ctx->pc = 0x262000u;
    {
        const bool branch_taken_0x262000 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 22));
        ctx->pc = 0x262004u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x262000) {
            ctx->pc = 0x262040u;
            goto label_262040;
        }
    }
    ctx->pc = 0x262008u;
    // 0x262008: 0x3c04003b
    ctx->pc = 0x262008u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x26200c: 0x24849848
    ctx->pc = 0x26200cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940744));
    // 0x262010: 0xc0b49a6
    ctx->pc = 0x262010u;
    SET_GPR_U32(ctx, 31, 0x262018u);
    ctx->pc = 0x262014u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262018u; }
    }
    if (ctx->pc != 0x262018u) { return; }
    ctx->pc = 0x262018u;
    // 0x262018: 0x10000009
    ctx->pc = 0x262018u;
    {
        const bool branch_taken_0x262018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26201Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x262018) {
            ctx->pc = 0x262040u;
            goto label_262040;
        }
    }
    ctx->pc = 0x262020u;
label_262020:
    // 0x262020: 0x3c020034
    ctx->pc = 0x262020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262024: 0x8c42e7c0
    ctx->pc = 0x262024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262028: 0x50400004
    ctx->pc = 0x262028u;
    {
        const bool branch_taken_0x262028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x262028) {
            ctx->pc = 0x26202Cu;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x26203Cu;
            goto label_26203c;
        }
    }
    ctx->pc = 0x262030u;
    // 0x262030: 0x84420018
    ctx->pc = 0x262030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x262034: 0x222102a
    ctx->pc = 0x262034u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x262038: 0x2880a
    ctx->pc = 0x262038u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
label_26203c:
    // 0x26203c: 0x101200
    ctx->pc = 0x26203cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 8));
label_262040:
    // 0x262040: 0x322400ff
    ctx->pc = 0x262040u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 255));
    // 0x262044: 0xc0986b4
    ctx->pc = 0x262044u;
    SET_GPR_U32(ctx, 31, 0x26204Cu);
    ctx->pc = 0x262048u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26204Cu; }
    }
    if (ctx->pc != 0x26204Cu) { return; }
    ctx->pc = 0x26204Cu;
    // 0x26204c: 0x1260000a
    ctx->pc = 0x26204Cu;
    {
        const bool branch_taken_0x26204c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x262050u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26204c) {
            ctx->pc = 0x262078u;
            goto label_262078;
        }
    }
    ctx->pc = 0x262054u;
    // 0x262054: 0x8c42e7c8
    ctx->pc = 0x262054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x262058: 0x84420004
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26205c: 0x531024
    ctx->pc = 0x26205cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x262060: 0x14400006
    ctx->pc = 0x262060u;
    {
        const bool branch_taken_0x262060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262064u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x262060) {
            ctx->pc = 0x26207Cu;
            goto label_26207c;
        }
    }
    ctx->pc = 0x262068u;
    // 0x262068: 0xc09882c
    ctx->pc = 0x262068u;
    SET_GPR_U32(ctx, 31, 0x262070u);
    ctx->pc = 0x26206Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2620B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextWorldLevel_0x2620b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262070u; }
    }
    if (ctx->pc != 0x262070u) { return; }
    ctx->pc = 0x262070u;
    // 0x262070: 0x1000ffb7
    ctx->pc = 0x262070u;
    {
        const bool branch_taken_0x262070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262074u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262070) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x262078u;
label_262078:
    // 0x262078: 0x101a00
    ctx->pc = 0x262078u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 8));
label_26207c:
    // 0x26207c: 0x322200ff
    ctx->pc = 0x26207cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
    // 0x262080: 0x621025
    ctx->pc = 0x262080u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262084: 0xdfbf0070
    ctx->pc = 0x262084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x262088: 0xdfb60060
    ctx->pc = 0x262088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26208c: 0xdfb50050
    ctx->pc = 0x26208cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262090: 0xdfb40040
    ctx->pc = 0x262090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262094: 0xdfb30030
    ctx->pc = 0x262094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262098: 0xdfb20020
    ctx->pc = 0x262098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26209c: 0xdfb10010
    ctx->pc = 0x26209cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2620a0: 0xdfb00000
    ctx->pc = 0x2620a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2620a4: 0x3e00008
    ctx->pc = 0x2620A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2620A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261F50u: goto label_261f50;
            case 0x261F80u: goto label_261f80;
            case 0x261F84u: goto label_261f84;
            case 0x261FB4u: goto label_261fb4;
            case 0x261FD8u: goto label_261fd8;
            case 0x262000u: goto label_262000;
            case 0x262020u: goto label_262020;
            case 0x26203Cu: goto label_26203c;
            case 0x262040u: goto label_262040;
            case 0x262078u: goto label_262078;
            case 0x26207Cu: goto label_26207c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2620ACu;
}
