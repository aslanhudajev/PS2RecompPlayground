#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitDynobjList
// Address: 0x21f430 - 0x21f51c
void InitDynobjList_0x21f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f430u;

    // 0x21f430: 0x27bdff60
    ctx->pc = 0x21f430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21f434: 0xffbf0090
    ctx->pc = 0x21f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21f438: 0xffbe0080
    ctx->pc = 0x21f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x21f43c: 0xffb70070
    ctx->pc = 0x21f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x21f440: 0xffb60060
    ctx->pc = 0x21f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21f444: 0xffb50050
    ctx->pc = 0x21f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21f448: 0xffb40040
    ctx->pc = 0x21f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21f44c: 0xffb30030
    ctx->pc = 0x21f44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21f450: 0xffb20020
    ctx->pc = 0x21f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f454: 0xffb10010
    ctx->pc = 0x21f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f458: 0xffb00000
    ctx->pc = 0x21f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f45c: 0x3c020032
    ctx->pc = 0x21f45cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f460: 0x8c42fa08
    ctx->pc = 0x21f460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965768)));
    // 0x21f464: 0x8c430000
    ctx->pc = 0x21f464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f468: 0x39d82
    ctx->pc = 0x21f468u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), 22));
    // 0x21f46c: 0x3c02003f
    ctx->pc = 0x21f46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)63 << 16));
    // 0x21f470: 0x3442ffff
    ctx->pc = 0x21f470u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x21f474: 0x628824
    ctx->pc = 0x21f474u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f478: 0x802d
    ctx->pc = 0x21f478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f47c: 0x1260001a
    ctx->pc = 0x21F47Cu;
    {
        const bool branch_taken_0x21f47c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F480u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f47c) {
            ctx->pc = 0x21F4E8u;
            goto label_21f4e8;
        }
    }
    ctx->pc = 0x21F484u;
    // 0x21f484: 0x3c020032
    ctx->pc = 0x21f484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f488: 0x2454f9f8
    ctx->pc = 0x21f488u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21f48c: 0x3c1e003c
    ctx->pc = 0x21f48cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)60 << 16));
    // 0x21f490: 0x24170050
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 80));
    // 0x21f494: 0x2416003c
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21f498: 0x3c150032
    ctx->pc = 0x21f498u;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
    // 0x21f49c: 0x0
    ctx->pc = 0x21f49cu;
    // NOP
label_21f4a0:
    // 0x21f4a0: 0x8e820014
    ctx->pc = 0x21f4a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21f4a4: 0x2221021
    ctx->pc = 0x21f4a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21f4a8: 0x84430000
    ctx->pc = 0x21f4a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f4ac: 0x8fc4d5dc
    ctx->pc = 0x21f4acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294956508)));
    // 0x21f4b0: 0x2171018
    ctx->pc = 0x21f4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21f4b4: 0x441021
    ctx->pc = 0x21f4b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21f4b8: 0xa4430040
    ctx->pc = 0x21f4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x21f4bc: 0x761818
    ctx->pc = 0x21f4bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21f4c0: 0x8e840004
    ctx->pc = 0x21f4c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21f4c4: 0x642021
    ctx->pc = 0x21f4c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21f4c8: 0xc6acfd48
    ctx->pc = 0x21f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294966600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f4cc: 0xc087cfc
    ctx->pc = 0x21F4CCu;
    SET_GPR_U32(ctx, 31, 0x21F4D4u);
    ctx->pc = 0x21F4D0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x21F3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcMaxObjSize_0x21f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4D4u; }
    }
    if (ctx->pc != 0x21F4D4u) { return; }
    ctx->pc = 0x21F4D4u;
    // 0x21f4d4: 0x2429021
    ctx->pc = 0x21f4d4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21f4d8: 0x26100001
    ctx->pc = 0x21f4d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f4dc: 0x213102a
    ctx->pc = 0x21f4dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 19)));
    // 0x21f4e0: 0x1440ffef
    ctx->pc = 0x21F4E0u;
    {
        const bool branch_taken_0x21f4e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F4E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x21f4e0) {
            ctx->pc = 0x21F4A0u;
            goto label_21f4a0;
        }
    }
    ctx->pc = 0x21F4E8u;
label_21f4e8:
    // 0x21f4e8: 0x240102d
    ctx->pc = 0x21f4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4ec: 0xdfbf0090
    ctx->pc = 0x21f4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21f4f0: 0xdfbe0080
    ctx->pc = 0x21f4f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f4f4: 0xdfb70070
    ctx->pc = 0x21f4f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f4f8: 0xdfb60060
    ctx->pc = 0x21f4f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f4fc: 0xdfb50050
    ctx->pc = 0x21f4fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f500: 0xdfb40040
    ctx->pc = 0x21f500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f504: 0xdfb30030
    ctx->pc = 0x21f504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f508: 0xdfb20020
    ctx->pc = 0x21f508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f50c: 0xdfb10010
    ctx->pc = 0x21f50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f510: 0xdfb00000
    ctx->pc = 0x21f510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f514: 0x3e00008
    ctx->pc = 0x21F514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F518u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F4A0u: goto label_21f4a0;
            case 0x21F4E8u: goto label_21f4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F51Cu;
}
