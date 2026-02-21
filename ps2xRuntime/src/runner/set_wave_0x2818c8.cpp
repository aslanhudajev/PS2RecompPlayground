#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_wave
// Address: 0x2818c8 - 0x281a1c
void set_wave_0x2818c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2818c8u;

    // 0x2818c8: 0x27bdffb0
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2818cc: 0x24020001
    ctx->pc = 0x2818ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2818d0: 0x10a20032
    ctx->pc = 0x2818D0u;
    {
        const bool branch_taken_0x2818d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x2818D4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x2818d0) {
            ctx->pc = 0x28199Cu;
            goto label_28199c;
        }
    }
    ctx->pc = 0x2818D8u;
    // 0x2818d8: 0x28a20002
    ctx->pc = 0x2818d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x2818dc: 0x1040000a
    ctx->pc = 0x2818DCu;
    {
        const bool branch_taken_0x2818dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2818E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2818dc) {
            ctx->pc = 0x281908u;
            goto label_281908;
        }
    }
    ctx->pc = 0x2818E4u;
    // 0x2818e4: 0x10a20029
    ctx->pc = 0x2818E4u;
    {
        const bool branch_taken_0x2818e4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x2818e4) {
            ctx->pc = 0x28198Cu;
            goto label_28198c;
        }
    }
    ctx->pc = 0x2818ECu;
    // 0x2818ec: 0x4a1000f
    ctx->pc = 0x2818ECu;
    {
        const bool branch_taken_0x2818ec = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2818F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2818ec) {
            ctx->pc = 0x28192Cu;
            goto label_28192c;
        }
    }
    ctx->pc = 0x2818F4u;
    // 0x2818f4: 0x2402fffe
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2818f8: 0x10a2002a
    ctx->pc = 0x2818F8u;
    {
        const bool branch_taken_0x2818f8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x2818FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2818f8) {
            ctx->pc = 0x2819A4u;
            goto label_2819a4;
        }
    }
    ctx->pc = 0x281900u;
    // 0x281900: 0x10000044
    ctx->pc = 0x281900u;
    {
        const bool branch_taken_0x281900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x281900) {
            ctx->pc = 0x281A14u;
            goto label_281a14;
        }
    }
    ctx->pc = 0x281908u;
label_281908:
    // 0x281908: 0x24020002
    ctx->pc = 0x281908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28190c: 0x10a20029
    ctx->pc = 0x28190Cu;
    {
        const bool branch_taken_0x28190c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x281910u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1000));
        if (branch_taken_0x28190c) {
            ctx->pc = 0x2819B4u;
            goto label_2819b4;
        }
    }
    ctx->pc = 0x281914u;
    // 0x281914: 0x1040003e
    ctx->pc = 0x281914u;
    {
        const bool branch_taken_0x281914 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281918u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 998));
        if (branch_taken_0x281914) {
            ctx->pc = 0x281A10u;
            goto label_281a10;
        }
    }
    ctx->pc = 0x28191Cu;
    // 0x28191c: 0x1440003d
    ctx->pc = 0x28191Cu;
    {
        const bool branch_taken_0x28191c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x281920u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x28191c) {
            ctx->pc = 0x281A14u;
            goto label_281a14;
        }
    }
    ctx->pc = 0x281924u;
    // 0x281924: 0x1000002c
    ctx->pc = 0x281924u;
    {
        const bool branch_taken_0x281924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281928u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x281924) {
            ctx->pc = 0x2819D8u;
            goto label_2819d8;
        }
    }
    ctx->pc = 0x28192Cu;
label_28192c:
    // 0x28192c: 0x8c47e7c8
    ctx->pc = 0x28192cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x281930: 0x3a0202d
    ctx->pc = 0x281930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281934: 0x3c05003b
    ctx->pc = 0x281934u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x281938: 0x24a5bfa8
    ctx->pc = 0x281938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950824));
    // 0x28193c: 0x24e60008
    ctx->pc = 0x28193cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 8));
    // 0x281940: 0xc0b6252
    ctx->pc = 0x281940u;
    SET_GPR_U32(ctx, 31, 0x281948u);
    ctx->pc = 0x281944u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 20));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281948u; }
    }
    if (ctx->pc != 0x281948u) { return; }
    ctx->pc = 0x281948u;
    // 0x281948: 0x3c02003c
    ctx->pc = 0x281948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28194c: 0x3c03003c
    ctx->pc = 0x28194cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x281950: 0x3c06003c
    ctx->pc = 0x281950u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x281954: 0x3c07003c
    ctx->pc = 0x281954u;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
    // 0x281958: 0x3c08003c
    ctx->pc = 0x281958u;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x28195c: 0x8c443ac8
    ctx->pc = 0x28195cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15048)));
    // 0x281960: 0x8c653acc
    ctx->pc = 0x281960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 15052)));
    // 0x281964: 0x8cc63abc
    ctx->pc = 0x281964u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 15036)));
    // 0x281968: 0x8ce73ac4
    ctx->pc = 0x281968u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 15044)));
    // 0x28196c: 0xc50c3ac0
    ctx->pc = 0x28196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281970: 0xc080510
    ctx->pc = 0x281970u;
    SET_GPR_U32(ctx, 31, 0x281978u);
    ctx->pc = 0x281974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281978u; }
    }
    if (ctx->pc != 0x281978u) { return; }
    ctx->pc = 0x281978u;
    // 0x281978: 0x8c430000
    ctx->pc = 0x281978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28197c: 0x3c040004
    ctx->pc = 0x28197cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
    // 0x281980: 0x641825
    ctx->pc = 0x281980u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x281984: 0x10000022
    ctx->pc = 0x281984u;
    {
        const bool branch_taken_0x281984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281988u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x281984) {
            ctx->pc = 0x281A10u;
            goto label_281a10;
        }
    }
    ctx->pc = 0x28198Cu;
label_28198c:
    // 0x28198c: 0xc098878
    ctx->pc = 0x28198Cu;
    SET_GPR_U32(ctx, 31, 0x281994u);
    ctx->pc = 0x281990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2621E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrevWorldLevel_0x2621e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281994u; }
    }
    if (ctx->pc != 0x281994u) { return; }
    ctx->pc = 0x281994u;
    // 0x281994: 0x1000000b
    ctx->pc = 0x281994u;
    {
        const bool branch_taken_0x281994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281998u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x281994) {
            ctx->pc = 0x2819C4u;
            goto label_2819c4;
        }
    }
    ctx->pc = 0x28199Cu;
label_28199c:
    // 0x28199c: 0x10000006
    ctx->pc = 0x28199Cu;
    {
        const bool branch_taken_0x28199c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2819A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28199c) {
            ctx->pc = 0x2819B8u;
            goto label_2819b8;
        }
    }
    ctx->pc = 0x2819A4u;
label_2819a4:
    // 0x2819a4: 0xc098878
    ctx->pc = 0x2819A4u;
    SET_GPR_U32(ctx, 31, 0x2819ACu);
    ctx->pc = 0x2819A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2621E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrevWorldLevel_0x2621e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819ACu; }
    }
    if (ctx->pc != 0x2819ACu) { return; }
    ctx->pc = 0x2819ACu;
    // 0x2819ac: 0x10000005
    ctx->pc = 0x2819ACu;
    {
        const bool branch_taken_0x2819ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2819B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x2819ac) {
            ctx->pc = 0x2819C4u;
            goto label_2819c4;
        }
    }
    ctx->pc = 0x2819B4u;
label_2819b4:
    // 0x2819b4: 0x2404ffff
    ctx->pc = 0x2819b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2819b8:
    // 0x2819b8: 0xc09882c
    ctx->pc = 0x2819B8u;
    SET_GPR_U32(ctx, 31, 0x2819C0u);
    ctx->pc = 0x2620B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextWorldLevel_0x2620b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819C0u; }
    }
    if (ctx->pc != 0x2819C0u) { return; }
    ctx->pc = 0x2819C0u;
    // 0x2819c0: 0x3c030031
    ctx->pc = 0x2819c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2819c4:
    // 0x2819c4: 0xac62000c
    ctx->pc = 0x2819c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2819c8: 0xc0986b4
    ctx->pc = 0x2819C8u;
    SET_GPR_U32(ctx, 31, 0x2819D0u);
    ctx->pc = 0x2819CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819D0u; }
    }
    if (ctx->pc != 0x2819D0u) { return; }
    ctx->pc = 0x2819D0u;
    // 0x2819d0: 0x10000010
    ctx->pc = 0x2819D0u;
    {
        const bool branch_taken_0x2819d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2819D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2819d0) {
            ctx->pc = 0x281A14u;
            goto label_281a14;
        }
    }
    ctx->pc = 0x2819D8u;
label_2819d8:
    // 0x2819d8: 0x3c030034
    ctx->pc = 0x2819d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2819dc: 0x8c44000c
    ctx->pc = 0x2819dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2819e0: 0x8c62e7d4
    ctx->pc = 0x2819e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961108)));
    // 0x2819e4: 0x14820005
    ctx->pc = 0x2819E4u;
    {
        const bool branch_taken_0x2819e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2819E8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x2819e4) {
            ctx->pc = 0x2819FCu;
            goto label_2819fc;
        }
    }
    ctx->pc = 0x2819ECu;
    // 0x2819ec: 0x3c030032
    ctx->pc = 0x2819ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2819f0: 0x24020001
    ctx->pc = 0x2819f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2819f4: 0x10000006
    ctx->pc = 0x2819F4u;
    {
        const bool branch_taken_0x2819f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2819F8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964308), GPR_U32(ctx, 2));
        if (branch_taken_0x2819f4) {
            ctx->pc = 0x281A10u;
            goto label_281a10;
        }
    }
    ctx->pc = 0x2819FCu;
label_2819fc:
    // 0x2819fc: 0x3c020031
    ctx->pc = 0x2819fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x281a00: 0x8c42000c
    ctx->pc = 0x281a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x281a04: 0x3c030001
    ctx->pc = 0x281a04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x281a08: 0x431021
    ctx->pc = 0x281a08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281a0c: 0xac8207bc
    ctx->pc = 0x281a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1980), GPR_U32(ctx, 2));
label_281a10:
    // 0x281a10: 0xdfbf0040
    ctx->pc = 0x281a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_281a14:
    // 0x281a14: 0x3e00008
    ctx->pc = 0x281A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281908u: goto label_281908;
            case 0x28192Cu: goto label_28192c;
            case 0x28198Cu: goto label_28198c;
            case 0x28199Cu: goto label_28199c;
            case 0x2819A4u: goto label_2819a4;
            case 0x2819B4u: goto label_2819b4;
            case 0x2819B8u: goto label_2819b8;
            case 0x2819C4u: goto label_2819c4;
            case 0x2819D8u: goto label_2819d8;
            case 0x2819FCu: goto label_2819fc;
            case 0x281A10u: goto label_281a10;
            case 0x281A14u: goto label_281a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281A1Cu;
}
