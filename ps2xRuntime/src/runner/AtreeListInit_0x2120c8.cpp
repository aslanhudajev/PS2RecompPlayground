#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeListInit
// Address: 0x2120c8 - 0x2121d8
void AtreeListInit_0x2120c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2120c8u;

    // 0x2120c8: 0x27bdff60
    ctx->pc = 0x2120c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2120cc: 0xffbf0090
    ctx->pc = 0x2120ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2120d0: 0xffbe0080
    ctx->pc = 0x2120d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2120d4: 0xffb70070
    ctx->pc = 0x2120d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2120d8: 0xffb60060
    ctx->pc = 0x2120d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2120dc: 0xffb50050
    ctx->pc = 0x2120dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2120e0: 0xffb40040
    ctx->pc = 0x2120e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2120e4: 0xffb30030
    ctx->pc = 0x2120e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2120e8: 0xffb20020
    ctx->pc = 0x2120e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2120ec: 0xffb10010
    ctx->pc = 0x2120ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2120f0: 0xffb00000
    ctx->pc = 0x2120f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2120f4: 0x80882d
    ctx->pc = 0x2120f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120f8: 0xa0982d
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120fc: 0xc0b82d
    ctx->pc = 0x2120fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212100: 0xe0902d
    ctx->pc = 0x212100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212104: 0x100f02d
    ctx->pc = 0x212104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212108: 0x3c020032
    ctx->pc = 0x212108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21210c: 0x8c42f4d0
    ctx->pc = 0x21210cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964432)));
    // 0x212110: 0x18400015
    ctx->pc = 0x212110u;
    {
        const bool branch_taken_0x212110 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212114u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212110) {
            ctx->pc = 0x212168u;
            goto label_212168;
        }
    }
    ctx->pc = 0x212118u;
    // 0x212118: 0x3c020032
    ctx->pc = 0x212118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21211c: 0x2456f538
    ctx->pc = 0x21211cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294964536));
    // 0x212120: 0x3c020032
    ctx->pc = 0x212120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212124: 0x2455f598
    ctx->pc = 0x212124u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294964632));
    // 0x212128: 0x3c140032
    ctx->pc = 0x212128u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x21212c: 0x101080
    ctx->pc = 0x21212cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_212130:
    // 0x212130: 0x561021
    ctx->pc = 0x212130u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x212134: 0x8c420000
    ctx->pc = 0x212134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212138: 0x54510007
    ctx->pc = 0x212138u;
    {
        const bool branch_taken_0x212138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x212138) {
            ctx->pc = 0x21213Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x212158u;
            goto label_212158;
        }
    }
    ctx->pc = 0x212140u;
    // 0x212140: 0x102100
    ctx->pc = 0x212140u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x212144: 0x952021
    ctx->pc = 0x212144u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x212148: 0x240282d
    ctx->pc = 0x212148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21214c: 0xc0bf42e
    ctx->pc = 0x21214Cu;
    SET_GPR_U32(ctx, 31, 0x212154u);
    ctx->pc = 0x212150u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212154u; }
    }
    if (ctx->pc != 0x212154u) { return; }
    ctx->pc = 0x212154u;
    // 0x212154: 0x26100001
    ctx->pc = 0x212154u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_212158:
    // 0x212158: 0x8e82f4d0
    ctx->pc = 0x212158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294964432)));
    // 0x21215c: 0x202102a
    ctx->pc = 0x21215cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x212160: 0x1440fff3
    ctx->pc = 0x212160u;
    {
        const bool branch_taken_0x212160 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212164u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x212160) {
            ctx->pc = 0x212130u;
            goto label_212130;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0x12600008
    ctx->pc = 0x212168u;
    {
        const bool branch_taken_0x212168 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21216Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212168) {
            ctx->pc = 0x21218Cu;
            goto label_21218c;
        }
    }
    ctx->pc = 0x212170u;
    // 0x212170: 0x260282d
    ctx->pc = 0x212170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212174: 0xc0847fc
    ctx->pc = 0x212174u;
    SET_GPR_U32(ctx, 31, 0x21217Cu);
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21217Cu; }
    }
    if (ctx->pc != 0x21217Cu) { return; }
    ctx->pc = 0x21217Cu;
    // 0x21217c: 0x14400006
    ctx->pc = 0x21217Cu;
    {
        const bool branch_taken_0x21217c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212180u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21217c) {
            ctx->pc = 0x212198u;
            goto label_212198;
        }
    }
    ctx->pc = 0x212184u;
    // 0x212184: 0x10000008
    ctx->pc = 0x212184u;
    {
        const bool branch_taken_0x212184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212188u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212184) {
            ctx->pc = 0x2121A8u;
            goto label_2121a8;
        }
    }
    ctx->pc = 0x21218Cu;
label_21218c:
    // 0x21218c: 0x8e220004
    ctx->pc = 0x21218cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x212190: 0x8c440020
    ctx->pc = 0x212190u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x212194: 0x2242021
    ctx->pc = 0x212194u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_212198:
    // 0x212198: 0x2e0282d
    ctx->pc = 0x212198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21219c: 0x240302d
    ctx->pc = 0x21219cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121a0: 0xc08476a
    ctx->pc = 0x2121A0u;
    SET_GPR_U32(ctx, 31, 0x2121A8u);
    ctx->pc = 0x2121A4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121A8u; }
    }
    if (ctx->pc != 0x2121A8u) { return; }
    ctx->pc = 0x2121A8u;
label_2121a8:
    // 0x2121a8: 0xdfbf0090
    ctx->pc = 0x2121a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2121ac: 0xdfbe0080
    ctx->pc = 0x2121acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2121b0: 0xdfb70070
    ctx->pc = 0x2121b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2121b4: 0xdfb60060
    ctx->pc = 0x2121b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2121b8: 0xdfb50050
    ctx->pc = 0x2121b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2121bc: 0xdfb40040
    ctx->pc = 0x2121bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2121c0: 0xdfb30030
    ctx->pc = 0x2121c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2121c4: 0xdfb20020
    ctx->pc = 0x2121c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2121c8: 0xdfb10010
    ctx->pc = 0x2121c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2121cc: 0xdfb00000
    ctx->pc = 0x2121ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2121d0: 0x3e00008
    ctx->pc = 0x2121D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2121D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212130u: goto label_212130;
            case 0x212158u: goto label_212158;
            case 0x212168u: goto label_212168;
            case 0x21218Cu: goto label_21218c;
            case 0x212198u: goto label_212198;
            case 0x2121A8u: goto label_2121a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2121D8u;
}
